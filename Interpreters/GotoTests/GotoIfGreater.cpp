#include "GotoIfGreater.h"

GotoIfGreater::GotoIfGreater(int& currentLine) : Goto{ currentLine } {}

bool GotoIfGreater::canGoto(std::vector<std::string>& stack)
{
    auto val2 = getConvertedStackValue(stack);
    auto val1 = getConvertedStackValue(stack);
    std::cout << "ggt" << std::endl;

    return (val1 > val2);
}