#include "ParcerLib.h"

ParserLib::ParserLib()
{
    _addresses = std::make_unique<std::map<std::string, int>>();
    _variables = std::make_unique<std::map<std::string, std::string>>();
	_labelCreation = std::make_unique<LabelCreation>();
	_labelRetrieval = std::make_unique<LabelRetrieval>();
	_variableCreation = std::make_unique<VariableCreation>();
	_variableRetrieval = std::make_unique<VariableRetrieval>();
}

std::unique_ptr<iVariableParser>& ParserLib::getVariableParser(char value)
{
    if(value == '=')
    {
        return _variableCreation;
    }

    if(value == '$')
    {
        return _variableRetrieval;
    }

    throw "NoLabelInterpreterFoundException";
}

std::unique_ptr<iLabelParser>& ParserLib::getLabelParser(char value)
{
    if(value == ':')
    {
        return _labelCreation;
    }

    if(value == '>')
    {
        return _labelRetrieval;
    }

    throw "NoLabelInterpreterFoundException";
}

void ParserLib::cleanReset()
{
    _addresses->clear();
    _variables->clear();
}