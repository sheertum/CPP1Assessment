#include "GotoIfLessOrEqual.h"

GotoIfLessOrEqual::GotoIfLessOrEqual(int& currentLine) : Goto{ currentLine } {}

bool GotoIfLessOrEqual::canGoto(std::vector<std::string>& stack)
{
    auto val2 = getConvertedStackValue(stack);
    auto val1 = getConvertedStackValue(stack);
    std::cout << "gle" << std::endl;

    return (val1 <= val2);
}