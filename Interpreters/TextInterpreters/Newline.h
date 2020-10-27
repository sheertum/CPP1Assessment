#pragma once
#include "../Interpreter.h"
#include <iostream>

class Newline : public Interpreter
{
public:
	void processString(std::vector<std::string>&) override;
};