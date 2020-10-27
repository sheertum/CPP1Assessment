 #include "MethodLib.h"

MethodLib::MethodLib(int& currentLine)
{
    _lib = std::make_unique<std::map<std::string, std::unique_ptr<Interpreter>>>();
     //int
    _lib->emplace("add", std::make_unique<Addition>());
    _lib->emplace("sub", std::make_unique<Subtraction>());
    _lib->emplace("mul", std::make_unique<Multiplication>());
    _lib->emplace("div", std::make_unique<Division>());
    _lib->emplace("mod", std::make_unique<Modulo>());
    _lib->emplace("neg", std::make_unique<Negate>());
    _lib->emplace("abs", std::make_unique<Absolute>());
    _lib->emplace("inc", std::make_unique<Increment>());
    _lib->emplace("dec", std::make_unique<Decrement>());

     //string
    _lib->emplace("dup", std::make_unique<Duplicate>());
    _lib->emplace("rev", std::make_unique<Reverse>());
    _lib->emplace("slc", std::make_unique<Substring>());
    _lib->emplace("idx", std::make_unique<Indexing>());
    _lib->emplace("cat", std::make_unique<Concatenation>());
    _lib->emplace("len", std::make_unique<Length>());
    _lib->emplace("rot", std::make_unique<Rot13>());
    _lib->emplace("enl", std::make_unique<Newline>());

    //tests and jumps
    _lib->emplace("gto", std::make_unique<Goto>(currentLine));
    _lib->emplace("geq", std::make_unique<GotoIfEqual>(currentLine));    
    _lib->emplace("gne", std::make_unique<GotoIfNotEqual>(currentLine));
    _lib->emplace("glt", std::make_unique<GotoIfLess>(currentLine));
    _lib->emplace("gle", std::make_unique<GotoIfLessOrEqual>(currentLine));
    _lib->emplace("ggt", std::make_unique<GotoIfGreater>(currentLine));
    _lib->emplace("gge", std::make_unique<GotoIfGreaterOrEqual>(currentLine));


    // //eindoplossing
    // _lib->emplace("end", std::make_unique<Interpreter>());
}

const std::unique_ptr<Interpreter>& MethodLib::getInterpreter(std::string value)
{
    auto result = _lib->find(value);
    
    if (result == _lib->end())
    {
        throw "InterpreterNotFoundException";
    }
    return result->second;
}