#include "Interpreter.h"
#include <memory>
#include <stdexcept>
#include <iostream>

void Interpreter::safeProcessString(std::vector<std::string>& stack)
{
	try
	{
		processString(stack);
	}
	catch (const std::out_of_range& oor) {
    	std::cerr << "Out of Range error" << std::endl;
	}
}

int Interpreter::getConvertedStackValue(std::vector<std::string>& stack)
{
	int val;

	try {
		val = std::stoi(stack.back());
	}
	catch (...)
	{
		std::cerr << "Out of Range error" << std::endl;
		return 0;
	}

	stack.pop_back();
	return val;
}