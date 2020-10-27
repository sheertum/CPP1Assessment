#pragma once
#include "MethodLib.h"
#include "ParserInterpreters/ParcerLib.h"
#include "Interpreters/Interpreter.h"

#include <string>

class Parser {
public:
	Parser();
	std::string getParsedAnswer(std::string);

private:
	std::unique_ptr<MethodLib> _methodsLibrary {nullptr};	
	std::unique_ptr<ParserLib> _parserLib {nullptr};
	int _currentInstruction = 0;
};
