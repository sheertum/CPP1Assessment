#pragma once
#include "../Interpreter.h"
#include <iostream>

class Duplicate : public Interpreter
{
public:
	void processString(std::vector<std::string>&) override;
};