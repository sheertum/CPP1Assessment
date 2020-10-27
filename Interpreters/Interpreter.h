#pragma once

#include <vector>
#include <string>
#include <memory>

class Interpreter {
public:
	void safeProcessString(std::vector<std::string>&);
	int getConvertedStackValue(std::vector<std::string>&);
protected:
	virtual void processString(std::vector<std::string>&) = 0;
};