#include "VariableCreation.h"

void VariableCreation::parseVariable(std::string name, std::vector<std::string>& stack, std::map<std::string, std::string>& variables)
{
	std::string value = stack.back();
	stack.pop_back();
	if (variables.find(name) != variables.end())
	{
		variables.erase(name);
	}
	variables.emplace(name, value);
	std::cout << name << "= " << value << std::endl;
}