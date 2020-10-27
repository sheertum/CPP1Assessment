#include "Indexing.h"

void Indexing::processString(std::vector<std::string>& stack)
{
    int index = getConvertedStackValue(stack);
    std::string val = stack.back();
    std::string result;

    stack.pop_back();

    result.push_back(val[index]);

    stack.push_back(result);

    std::cout << "idx "<<result << std::endl;
}