
#include "StellaTypeChecker.hpp"
#include "stellaLexer.h"

#include <iostream>
#include <stdexcept>

int main()
try {
    antlr4::ANTLRInputStream input(std::cin);
    stellaLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);

    tokens.fill();
    stellaParser parser(&tokens);

    parser.removeErrorListeners();
    parser.addErrorListener(new antlr4::ConsoleErrorListener());

    auto* tree = parser.program();

    typecheck::StellaTypeCheckerContext typeCtx;
    typecheck::StellaTypeChecker visitor{typeCtx};
    visitor.visit(tree);

    std::cout << "Input program is well-typed!" << std::endl;
    return 0;
}
catch (std::runtime_error const& e)
{
    std::cerr << e.what() << std::endl;
    return 1;
}