#pragma once
#include "../Interpreter.h"
#include <iostream>

class Negate : public Interpreter
{
public:
	void processString(std::vector<std::string>&) override;
};
