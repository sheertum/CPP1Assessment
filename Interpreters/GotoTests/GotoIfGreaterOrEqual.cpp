#include "GotoIfGreaterOrEqual.h"

GotoIfGreaterOrEqual::GotoIfGreaterOrEqual(int& currentLine) : Goto{ currentLine } {}

bool GotoIfGreaterOrEqual::canGoto(std::vector<std::string>& stack)
{
    auto val2 = getConvertedStackValue(stack);
    auto val1 = getConvertedStackValue(stack);
    std::cout << "gge" << std::endl;

    return (val1 >= val2);
}