#include "Goto.h"
#include <iostream>

Goto::Goto(int& currentLine) : _currentLine(currentLine) {}

void Goto::processString(std::vector<std::string>& stack) {
	int target = std::stoi(stack.back());
	stack.pop_back();
	
	if (canGoto(stack))
	{
		_currentLine = target-1;
	}
}

bool Goto::canGoto(std::vector<std::string>& stack) {
	return true;
	std::cout << "gto" << std::endl;
}

