#include "Concatenation.h"

void Concatenation::processString(std::vector<std::string>& stack)
{
    std::string val1 = stack.back();
    stack.pop_back();
    std::string val2 = stack.back();
    stack.pop_back();
    std::string result = val2 + val1;

    stack.push_back(result);

    std::cout << "cat "<<result << std::endl;
}