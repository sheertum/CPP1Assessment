#pragma once
#include "../Interpreter.h"
#include <iostream>

class Length : public Interpreter
{
public:
	void processString(std::vector<std::string>&) override;
};