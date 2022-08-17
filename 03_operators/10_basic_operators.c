#include <stdio.h>
#include <stdbool.h>
#define formatBool(b) ((b) ? "true" : "false")

int main()
{
    /**
     * ! Arithmetic operators
     *  + - * / % ++ --
     */

    int a = 33;
    int b = 15;
    int result = 0;

    // binary operators
    result = a + b;
    printf("%d + %d = %d\n", a, b, result);
    result = a - b;
    printf("%d - %d = %d\n", a, b, result);
    result = a * b;
    printf("%d * %d = %d\n", a, b, result);
    result = a / b;
    printf("%d / %d = %d\n", a, b, result);
    result = a % b;
    printf("%d %% %d = %d\n", a, b, result);

    // unary operators
    result = a++;
    printf("a++ = %d\n", result); // postfix does not add until after the operation (print a, then add 1)
    printf("a = %d\n", a);
    result = ++a;
    printf("++a = %d\n", result); // prefix does add before the operation (add 1, then print a)

    /**
     * ! Logical operators
     * && || !
     */
    _Bool aBool = true;
    _Bool bBool = true;
    _Bool boolResult = false;
    boolResult = a && b;
    printf("%d && %d = %d === %s && %s = %s\n", aBool, bBool, boolResult, formatBool(aBool), formatBool(bBool), formatBool(boolResult));
    boolResult = a || b;
    printf("%d || %d = %d === %s || %s = %s\n", aBool, bBool, boolResult, formatBool(aBool), formatBool(bBool), formatBool(boolResult));
    boolResult = !aBool;
    printf("!%d = %d === !%s = %s\n", aBool, boolResult, formatBool(aBool), formatBool(boolResult));

    /**
     * ! Assignment operators
     * = += -= *= /= %= <<= >>= &= ^= |=
     */

    return 0;
}

/*
    ? Arithmetic, logical, assignment and relational operators
    An arithmetic operator is a mathematical function that takes two operands and performs a calculation on them

    A logical operator (sometimes called a "Boolear opsrator") is an operator that returns a Boolean
    result that's based on the Boolean result of one or two other expressions

    Assignment operators set variables equal to values
        assigns the value of the expression at its right to the variable at its left
    A relational operator will compare variables against eachother

    ! Arithmetic operators
    Examples:
    1) + -> adds two operands -> A + B = 30
    2) - -> subtracts second operand from the first -> A - B = -10
    3) * -> multiplies both operands -> A * B = 200
    4) / -> divides numerator by de-numerator -> B / A = 2
    5) % -> modulus operator and remainder of after an integer division -> B % A = 0
    6) ++ -> increments operator increases the integer value by 1 -> A++ = 11 (postfix)
    7) -- -> decrements operator decreases the integer value by 1 -> A-- = 9 (postfix)

    ! Logical Operators
    (TRUE = 1, FALSE = 0)
    1) && -> AND operator -> (A && B) is false (if both A and B are true)
    2) || -> OR operator -> (A || B) is true (if either A or B is true)
    3) ! -> NOT operator -> !(A && B) is true (if A is false)

    ! Assignment Operators
    1) = -> assigns the value of the expression at its right to the variable at its left -> C = A + B
    2) += -> adds the value of the expression at its right to the variable at its left -> C += A is equivalent to C = C + A
    3) -= -> subtracts the value of the expression at its right from the variable at its left -> C -= A is equivalent to C = C - A
    4) *= -> multiplies the value of the expression at its right to the variable at its left -> C *= A is equivalent to C = C * A
    5) /= -> divides the value of the expression at its right from the variable at its left -> C /= A is equivalent to C = C / A
    6) %= -> modulus operator and remainder of after an integer division -> C %= A is equivalent to C = C % A
    7) <<= -> left shift operator -> C <<= 2 is equivalent to C = C << 2
    8) >>= -> right shift operator -> C >>= 2 is equivalent to C = C >> 2
    9) &= -> bitwise AND operator -> C &= 2 is equivalent to C = C & 2
    10) ^= -> bitwise XOR operator -> C ^= 2 is equivalent to C = C ^ 2
    11) |= -> bitwise OR operator -> C |= 2 is equivalent to C = C | 2

    ! Relational Operators
    1) == -> equal to -> A == B is true if A is equal to B
    2) != -> not equal to -> A != B is true if A is not equal to B
    3) > -> greater than -> A > B is true if A is greater than B
    4) < -> less than -> A < B is true if A is less than B
    5) >= -> greater than or equal to -> A >= B is true if A is greater than or equal to B
    6) <= -> less than or equal to -> A <= B is true if A is less than or equal to B
*/