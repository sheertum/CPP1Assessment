#include "Negate.h"

void Negate::processString(std::vector<std::string>& stack)
{
    int val1 = getConvertedStackValue(stack);
    val1 *= -1;
    std::string result = std::to_string(val1);
    stack.push_back(result);

    std::cout << "neg "<<result << std::endl;
}