#pragma once
#include "../Interpreter.h"
#include <iostream>

class Substring : public Interpreter
{
public:
	void processString(std::vector<std::string>&) override;
};
