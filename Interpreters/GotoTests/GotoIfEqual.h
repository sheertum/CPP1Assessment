#pragma once
#include "Goto.h"
#include <iostream>
class GotoIfEqual : public Goto
{
public:
	GotoIfEqual(int&);
	bool canGoto(std::vector<std::string>& stack) override;
};
