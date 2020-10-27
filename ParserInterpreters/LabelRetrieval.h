#pragma once
#include "iLabelParser.h"

class LabelRetrieval : public iLabelParser
{
public:
	void parseLabel(std::string name, int& currentAdress, std::vector<std::string>& stack, std::map<std::string, int >& addresses) override;
};
