#include "Newline.h"

void Newline::processString(std::vector<std::string>& stack)
{
    std::string val1 = stack.back();
    stack.pop_back();

    std::string result = val1 + "\n";

    stack.push_back(result);
    
    std::cout << "enl "<<result << std::endl;
}