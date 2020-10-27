#include "Increment.h"

void Increment::processString(std::vector<std::string>& stack)
{
    int val1 = getConvertedStackValue(stack);
    std::string result = std::to_string(++val1);
    stack.push_back(result);

    std::cout << "inc "<<result << std::endl;
}