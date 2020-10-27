#include "Multiplication.h"

void Multiplication::processString(std::vector<std::string>& stack)
{
    int val1 = getConvertedStackValue(stack);
    int val2 = getConvertedStackValue(stack);
    
    std::string result = std::to_string(val1*val2);
    stack.push_back(result);

    std::cout << "mul  "<<result << std::endl;
}