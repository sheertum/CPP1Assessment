#pragma once
#include <vector>
#include <string>
#include <map>
#include <memory>
#include <iostream>

class iLabelParser
{
public:
	virtual void parseLabel(std::string name, int& currentAdress, std::vector<std::string>& stack, std::map<std::string, int >& addresses) = 0;
};