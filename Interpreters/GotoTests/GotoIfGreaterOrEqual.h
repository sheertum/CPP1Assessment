#pragma once
#include "Goto.h"
#include <iostream>
class GotoIfGreaterOrEqual : public Goto
{
public:
	GotoIfGreaterOrEqual(int&);
	bool canGoto(std::vector<std::string>& stack) override;
};
#pragma once

