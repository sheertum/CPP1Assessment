#pragma once
#include "Goto.h"
#include <iostream>
class GotoIfNotEqual : public Goto
{
public:
	GotoIfNotEqual(int&);
	bool canGoto(std::vector<std::string>& stack) override;
};
