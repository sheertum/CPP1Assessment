#include "VariableRetrieval.h"

void VariableRetrieval::parseVariable(std::string name, std::vector<std::string>& stack, std::map<std::string, std::string>& variables)
{
	std::string result = variables.at(name);
	stack.push_back(result);
	std::cout << name << " has pushed " << result << " to the stack" << std::endl;
}