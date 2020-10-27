#include "Reverse.h"

void Reverse::processString(std::vector<std::string>& stack)
{
    std::string val = stack.back();
    std::string result;
    
    stack.pop_back();

    while(val.size() > 0)
    {
        result.push_back(val.back());
        val.pop_back();
    }

    stack.push_back(result);

    std::cout << "rev "<<result << std::endl;
}