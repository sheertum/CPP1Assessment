#include "Rot13.h"

void Rot13::processString(std::vector<std::string>& stack)
{
    std::string val = stack.back();
    stack.pop_back();

    std::string result;

    for (int i = 0; i < val.size(); i++)
    {
        if (val[i] < 'A' || val[i] > 'z')
        {
            result.push_back(val[i]);
            continue;
        }
        if (val[i] < 'N')
        {
            result.push_back(val[i] + 13);
            continue;
        }

        if (val[i] <= 'Z')
        {
            result.push_back(val[i] - 13);
            continue;
        }

        if (val[i] < 'n')
        {
            result.push_back(val[i] + 13);
            continue;
        }

        result.push_back(val[i] - 13);
    }

    stack.push_back(result);

    std::cout << "rot "<<result << std::endl;
}