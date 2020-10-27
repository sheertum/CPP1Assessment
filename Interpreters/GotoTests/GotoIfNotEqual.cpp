#include "GotoIfNotEqual.h"

GotoIfNotEqual::GotoIfNotEqual(int& currentLine) : Goto{ currentLine } {}

bool GotoIfNotEqual::canGoto(std::vector<std::string>& stack)
{
    std::string val1 = stack.back();
    stack.pop_back();
    std::string val2 = stack.back();
    stack.pop_back();
    std::cout << "gne" << std::endl;

    return (val1.compare(val2) != 0);
}