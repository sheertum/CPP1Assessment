#pragma once
#include "../Interpreter.h"
#include <iostream>

class Decrement : public Interpreter
{
public:
	void processString(std::vector<std::string>&) override;
};
