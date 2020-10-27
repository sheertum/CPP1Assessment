#pragma once
#include "LabelCreation.h"
#include "LabelRetrieval.h"
#include "VariableCreation.h"
#include "VariableRetrieval.h"

#include <memory>

class ParserLib {
public:
	ParserLib();
	std::unique_ptr<iVariableParser>& getVariableParser(char);
	std::unique_ptr<iLabelParser>& getLabelParser(char);
	void cleanReset();
private:
	std::unique_ptr<std::map<std::string, std::string>> _variables;
	std::unique_ptr<std::map<std::string, int>> _addresses;
	std::unique_ptr<iVariableParser> _variableCreation;
	std::unique_ptr<iVariableParser> _variableRetrieval;
	std::unique_ptr<iLabelParser> _labelCreation;
	std::unique_ptr<iLabelParser> _labelRetrieval;
};