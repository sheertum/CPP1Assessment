#pragma once
#include "Goto.h"
#include <iostream>
class GotoIfGreater : public Goto
{
public:
	GotoIfGreater(int&);
	bool canGoto(std::vector<std::string>& stack) override;
};
#pragma once

