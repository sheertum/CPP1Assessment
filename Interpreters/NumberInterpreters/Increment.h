#pragma once
#include "../Interpreter.h"
#include <iostream>

class Increment : public Interpreter
{
public:
	void processString(std::vector<std::string>&) override;
};
