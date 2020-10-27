#pragma once
#include "../Interpreter.h"
#include <iostream>

class Rot13 : public Interpreter
{
public:
	void processString(std::vector<std::string>&) override;
};