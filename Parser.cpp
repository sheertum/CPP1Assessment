#include "Parser.h"

#include <sstream>
#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <memory>

Parser::Parser() 
{
    _parserLib = std::make_unique<ParserLib>();
    _methodsLibrary = std::make_unique<MethodLib>(_currentInstruction);
}


std::string Parser::getParsedAnswer(std::string instructions)
{
    std::vector<std::string> _instructions;
    std::vector<std::string> _stack;
    std::vector<int> _callStack;
    std::map<std::string, int > labels;
    std::map<std::string, std::string> variables;
    std::map<std::string, int > callstack;

    _currentInstruction = 0;
    _parserLib->cleanReset();
    
    std::string line;
    std::stringstream lines(instructions);
    

    while (std::getline(lines, line))
    {
        _instructions.push_back(line);
    }

    if(_instructions.size() == 0)
    {
        std::cout << "NO INSTRUCTIONS FOUND" << std::endl;
        return std::string();
    }

    //preprocess
    for(int i = 0; i < _instructions.size(); i++)
    {
        std::string instruction = _instructions.at(i);
        char selector = instruction[0];
        instruction.erase(0, 1);
        if(selector == ':')
        {
            try
            {
                _parserLib->getLabelParser(selector)->parseLabel(instruction, i, _stack, labels);
            }
            catch(...)
            {
                std::cerr << "NO INTERPRETER FOUND" << std::endl;
                return "end";
            }
            
        }
    }



    while(_currentInstruction < _instructions.size()){
        std::string instruction = _instructions.at(_currentInstruction);
        char selector = instruction[0];
        if (instruction == "end")
        {
            std::cout << _stack.at(_stack.size() - 1) << std::endl;
            return "endl";
        }

        if (instruction == "fun") {
            _callStack.push_back(_currentInstruction+1);
            _methodsLibrary->getInterpreter(std::string("gto"))->safeProcessString(_stack);
            _currentInstruction++;
            continue;
        }
        else if (instruction == "ret")
        {
            auto target = std::to_string(_callStack.back());
            _stack.push_back(target);
            _callStack.pop_back();
            _methodsLibrary->getInterpreter(std::string("gto"))->safeProcessString(_stack);
            _currentInstruction++;
            continue;
        }

        if (isalpha(selector))
        {
            try {
                _methodsLibrary->getInterpreter(instruction)->safeProcessString(_stack);
            }
            catch (...) {
                std::cout << "NO INTERPRETER FOUND" << std::endl;
                return "end";
            }
        }

        if(std::isdigit(selector) || selector == '-')
        {
            _stack.push_back(instruction);
            std::cout << "pushed " << instruction << " to stack" << std::endl;
        }

        instruction.erase(0,1);
        
        if(selector == '\\')
        {
            _stack.push_back(instruction);
            std::cout << "pushed " << instruction << " to stack" << std::endl;

        }
        else if(selector == '>')
        {
            try
            {
                _parserLib->getLabelParser(selector)->parseLabel(instruction, _currentInstruction, _stack, labels);
            }
            catch(...)
            {
                std::cerr << "NO INTERPRETER FOUND" << std::endl;
                return "end";
            }
            
        }
        else if(selector == '=' || selector == '$')
        {
            try
            {
                _parserLib->getVariableParser(selector)->parseVariable(instruction, _stack, variables);
            }
            catch(...)
            {
                std::cerr << "NO INTERPRETER FOUND" << std::endl;
                return "end";
            }            
        }        
        _currentInstruction++;
    }
    return _stack.at(_stack.size()-1);
}