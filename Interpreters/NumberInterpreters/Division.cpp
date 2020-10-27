#include "Division.h"

void Division::processString(std::vector<std::string>& stack)
{
    int val1 = getConvertedStackValue(stack);
    int val2 = getConvertedStackValue(stack);
    if(val1 == 0)
    {
        throw "CanNotDevideByZeroException";
    }

    std::string result = std::to_string(val2/val1);
    stack.push_back(result);

    std::cout << "div "<<result << std::endl;
}