#include "Duplicate.h"

void Duplicate::processString(std::vector<std::string>& stack)
{
    std::string val = stack.back();
    stack.push_back(val);

    std::cout << "dup" << std::endl;
}