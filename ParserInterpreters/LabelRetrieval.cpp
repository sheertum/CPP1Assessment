#include "LabelRetrieval.h"

void LabelRetrieval::parseLabel(std::string name, int& currentAdress, std::vector<std::string>& stack, std::map<std::string, int>& addresses)
{
	int target = addresses.at(name);
	std::string result = std::to_string(target);
	stack.push_back(result);
	std::cout << "Pushed label " << name << " at " << target << " to the stack" << std::endl;
}