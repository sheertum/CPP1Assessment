#pragma once
#include "../Interpreter.h"
#include <vector>
#include <string>

class Goto : public Interpreter
{
public:
	explicit Goto(int&);
	void processString(std::vector<std::string>&);
protected:
	virtual bool canGoto(std::vector<std::string>& stack);
	int& _currentLine;
};