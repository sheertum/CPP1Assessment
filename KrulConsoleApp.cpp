// KrulConsoleApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "HTTPGetter.h"
#include "Parser.h"

#include <iostream>
#include <memory>
#define _CRTDBG_MAP_ALLOC

#include<iostream>

#include <crtdbg.h>

#ifdef _DEBUG

#define DEBUG_NEW new(_NORMAL_BLOCK, __FILE__, __LINE__)

#define new DEBUG_NEW

#endif

int main()
{
    {
        std::unique_ptr<HTTPGetter> getter = std::make_unique<HTTPGetter>();
        std::unique_ptr<Parser> parser = std::make_unique<Parser>();

        std::string result = "start.txt";

        while (result != "end") {
            std::string nextResult = getter->getStringData(result);
            auto newAdress = parser->getParsedAnswer(nextResult);
            result = newAdress;
        }
    }
    _CrtDumpMemoryLeaks();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
