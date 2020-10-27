#include "Subtraction.h"

void Subtraction::processString(std::vector<std::string>& stack)
{
    int val1 = getConvertedStackValue(stack);
    int val2 = getConvertedStackValue(stack);

    std::string result = std::to_string(val2-val1);
    stack.push_back(result);

    std::cout << "sub "<<result << std::endl;
}