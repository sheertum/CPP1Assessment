#pragma once
#include "Interpreters/Interpreter.h"
#include "Interpreters/NumberInterpreters/Absolute.h"
#include "Interpreters/NumberInterpreters/Addition.h"
#include "Interpreters/NumberInterpreters/Decrement.h"
#include "Interpreters/NumberInterpreters/Increment.h"
#include "Interpreters/NumberInterpreters/Modulo.h"
#include "Interpreters/NumberInterpreters/Multiplication.h"
#include "Interpreters/NumberInterpreters/Division.h"
#include "Interpreters/NumberInterpreters/Negate.h"
#include "Interpreters/NumberInterpreters/Subtraction.h"

#include "Interpreters/TextInterpreters/Concatenation.h"
#include "Interpreters/TextInterpreters/Duplicate.h"
#include "Interpreters/TextInterpreters/Indexing.h"
#include "Interpreters/TextInterpreters/Length.h"
#include "Interpreters/TextInterpreters/Newline.h"
#include "Interpreters/TextInterpreters/Reverse.h"
#include "Interpreters/TextInterpreters/Rot13.h"
#include "Interpreters/TextInterpreters/Substring.h"

#include "Interpreters/GotoTests/Goto.h"
#include "Interpreters/GotoTests/GotoIfEqual.h"
#include "Interpreters/GotoTests/GotoIfNotEqual.h"
#include "Interpreters/GotoTests/GotoIfLess.h"
#include "Interpreters/GotoTests/GotoIfLessOrEqual.h"
#include "Interpreters/GotoTests/GotoIfGreater.h"
#include "Interpreters/GotoTests/GotoIfGreaterOrEqual.h"

#include <string>
#include <memory>
#include <map>

class Interpreter;

class MethodLib
{
public:
    explicit MethodLib(int& currentLine);
	const std::unique_ptr<Interpreter>& getInterpreter(std::string);
private:
    std::unique_ptr<std::map<std::string, std::unique_ptr<Interpreter>>> _lib;
};
