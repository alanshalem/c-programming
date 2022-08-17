#include <stdio.h>

int main()
{
    int a = 5, b = 6, c = 7, d = 8, q = 9, x = 0, y = 0; // statement
    int index = 0;                                       // statement
    -6;                                                  // operator
    4 + 21;                                              // operator
    y = a * (b + c / d) / 20;                            // operator
    q = 5 * 2;                                           // operator
    x = ++q % 3;                                         // operator
    q > 3;                                               // operator

    while (index < 10) // statement
    {
        printf("hello\n");
        index = index + 1;
    }
    return 0;
}

/*
    Operators are functions that use a symbolic name
        perform mathematical or logical functions

    Operators are predefined in C, just like they are in most other languages, and most operators tend to
    be combined with the infix style

    TODO: Infix, Prefix, Postfix
    Example: arithmetic expression a + b consists of operands a, band operator+.

    ? Infix notation:
    Is format where operator is specified in between the two operands.
    ? Notation: a+b

    ? Prefix notation
    Is format where operator is specified before the two operands.
    ? Notation: +ab

    ? Postfix notation
    Is format where operator is specified after the two operands.
    Postfix notation is also called RPN or Reverse Polish
    ? Notation: ab+

    A logical operator (sometimes called a "Boolean operator") is an operator that returns a Boolean
    result that's based on the Boolean result of one or two other expressions

    An arithmetic operator is a mathematical function that takes two operands and performs a calculation
    on them

    Other operators include assignment, relational (<,>, =), bitwise (<, >>, -)

    Expressions and Statements:
    Statements form the basic program steps of C, and most statements are constructed from expressions

    An expression consists of a combination of operators and operands
        operands are what an operator operates on
        operands can be constants, variables, or combinations of the two
        every expression has a value

    Examples:
        -6
        4+21
        a(b+c/d)/20
        q=5*2
        x=++q%3
        q>3

    Statements are the building blocks of a program (declaration)
        A program is a series of statements with special syntax ending with a semicolon (simple statements)
        a complete instruction to the computer

    Declaration statement: int Jason;
    Assignment Statement: Jason = 5;
    Function call statement: printf("Jason");
    Structure Statement: while (Jason < 20) Jason = Jason+1;
    Return Statement: return 0;

    C considers any expression to be a statement if you append a semicolon (expression statements)
        So, 8; and 3-4, are perfectly valid in C

    two or more statements grouped together by enclosing them in braces (block)
        int index = 0;
        while (index < 10)
        {
        printf("hello");
        index = index + 1;
        }
*/