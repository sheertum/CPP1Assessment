#pragma once
#include "../Interpreter.h"
#include <iostream>

class Concatenation : public Interpreter
{
public:
	void processString(std::vector<std::string>&) override;
};