#include "Length.h"

void Length::processString(std::vector<std::string>& stack)
{
    std::string val1 = stack.back();
    stack.pop_back();
    
    // std::string result = std::to_string(val1.size());
    std::string result = std::to_string(val1.length());

    stack.push_back(result);

    std::cout << "len "<<result << std::endl;
}