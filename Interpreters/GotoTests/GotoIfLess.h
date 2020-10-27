#pragma once
#include "Goto.h"
#include <iostream>
class GotoIfLess : public Goto
{
public:
	GotoIfLess(int&);
	bool canGoto(std::vector<std::string>& stack) override;
};
#pragma once
