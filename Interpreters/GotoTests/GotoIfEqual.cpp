#include "GotoIfEqual.h"

GotoIfEqual::GotoIfEqual(int& currentLine) : Goto{ currentLine } {}

bool GotoIfEqual::canGoto(std::vector<std::string>& stack)
{
    std::string val1 = stack.back();
    stack.pop_back();
    std::string val2 = stack.back();
    stack.pop_back();
    std::cout << "gtq" << std::endl;
    
    return (val1.compare(val2)==0);
}