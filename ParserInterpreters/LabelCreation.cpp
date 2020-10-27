#include "LabelCreation.h"

void LabelCreation::parseLabel(std::string name, int& currentAdress, std::vector<std::string>& stack, std::map<std::string, int > &addresses)
{
	int next  = currentAdress + 1;
	addresses.emplace(name, next);
	std::cout << "Created label " << name << " at " << next << std::endl;
}