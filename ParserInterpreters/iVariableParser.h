#pragma once
#include <vector>
#include <string>
#include <map>
#include <memory>
#include <iostream>

class iVariableParser
{
public:
	virtual void parseVariable(std::string name, std::vector<std::string>& stack, std::map<std::string, std::string>& variables) = 0;
};