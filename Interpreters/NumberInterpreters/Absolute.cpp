#include "Absolute.h"

void Absolute::processString(std::vector<std::string>& stack)
{
    int val1 = getConvertedStackValue(stack);
    
    std::string result = std::to_string(abs(val1));
    stack.push_back(result);

    std::cout << "abs "<<result << std::endl;
}