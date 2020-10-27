#pragma once
#include "iVariableParser.h"

class VariableCreation : public iVariableParser
{
public:
	void parseVariable(std::string name, std::vector<std::string>& stack, std::map<std::string, std::string>& variables) override;
};
