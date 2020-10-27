#include "GotoIfLess.h"

GotoIfLess::GotoIfLess(int& currentLine) : Goto{ currentLine } {}

bool GotoIfLess::canGoto(std::vector<std::string>& stack)
{
    auto val2 = getConvertedStackValue(stack);
    auto val1 = getConvertedStackValue(stack);
    std::cout << "glt" << std::endl;

    return (val1 < val2);
}