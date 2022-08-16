#include <stdio.h>

int x = 0;
int f1()
{
    x = 5;
    return x;
}

int f2()
{
    x = 10;
    return x;
}

int main()
{
    int p = f1() + f2();
    printf("Value of p = f1() + f2() = %d\n", p);

    // ! **********
    int number;
    number = 1, 2, 3; // Evaluated as (a = 1), 2, 3
    printf("%d\n", number);
    // ! **********

    // ! **********
    int x = 10, y = 20, z = 30;
    // (z > y > x) is treated as ((z  > y) > x), associativity of '>'
    // is left to right. Therefore the value becomes ((30 > 20) > 10)
    // which becomes (1 > 10)
    if (z > y > x)
        printf("TRUE");
    else
        printf("FALSE");
    // ! **********

    // ! **********
    int a = 20;
    int b = 10;
    int c = 15;
    int d = 5;
    int e;

    e = (a + b) * c / d; // ( 30 * 15 ) / 5
    printf("Value of (a + b) * c / d is : %d\n", e);
    e = ((a + b) * c) / d; // (30 * 15 ) / 5
    printf("Value of ((a + b) * c) / d is  : %d\n", e);
    e = (a + b) * (c / d); // (30) * (15/5)
    printf("Value of (a + b) * (c / d) is  : %d\n", e);
    e = a + (b * c) / d; //  20 + (150/5)
    printf("Value of a + (b * c) / d is  : %d\n", e);
    // ! **********

    return 0;
}

/*
    -Operator precedence determines the grouping of terms in an expression and decides how an
    expression is evaluated
        -dictates the order of evaluation when two operators share an operand
        -certain operators have higher precedence than others
        -for example, the multiplication operator has a higher precedence than the addition operator

        x=7+3*2

        -Can result in 13 or 20 depending on the order of each operands evaluation

    -the order of executing the various operations can make a difference, so C needs unambiguous rules
    for choosing what to do first
    -In C, x is assigned 13, not 20 because operator has a higher precedence than+
        -first gets multiplied with 3'2 and then adds into 7
    -Each operator is assigned a precedence level
        -multiplication and division havea higher precedenca than addition and subtraction, so they are
        performed first
    -Whatever is enclosed in parentheses is executed first, should just always use () to group expressions

    -What if two operators have the same precedence?
        -Then associativity rules are applied
    -If they share an operand, they are executed according to the order in which they occur in the
    statement
        -For most operators, the order is from left to right

    1 == 2 != 3

    -operators == and != have same precedence
        -associativity of both == and != is left to right
        -the expression on the left is executed first and moves towards the right
    -the expression above is equivalent to
    0 = false 1 = true
    ((1 == 2) != 3) -> ((0) != 3) -> 0

    TODO: https://www.tutorialspoint.com/cprogramming/c_operators_precedence.htm
    TODO: https://www.geeksforgeeks.org/operator-precedence-and-associativity-in-c/
*/