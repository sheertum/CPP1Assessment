#include "Substring.h"

void Substring::processString(std::vector<std::string>& stack)
{
    int to = getConvertedStackValue(stack);
    int from = getConvertedStackValue(stack);
    std::string val = stack.back();
    std::string result;

    if(to < from)
    {
        throw "ToBiggerThanFromException";
    }

    stack.pop_back();

    to -= from;
    result = val.substr(from, to);

    stack.push_back(result);

    std::cout << "slc "<<result << std::endl;
}