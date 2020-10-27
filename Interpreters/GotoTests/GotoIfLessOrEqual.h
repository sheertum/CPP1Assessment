#pragma once
#include "Goto.h"
#include <iostream>
class GotoIfLessOrEqual : public Goto
{
public:
	GotoIfLessOrEqual(int&);
	bool canGoto(std::vector<std::string>& stack) override;
};
#pragma once
