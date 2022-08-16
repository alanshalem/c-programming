#include <stdio.h>

int main()
{
    unsigned int a = 60; // 60 = 0011 1100 -> Full: 0000 0000 0000 0000 0000 0000 0011 1100
    unsigned int b = 13; // 13 = 0000 1101
    int result = 0;

    result = a & b; // 12 = 0000 1100
    // 0011 1100 & 0000 1101 = 0000 1100
    // 0 & 0 = 0
    // 0 & 0 = 0

    printf("a: %d & b: %d = %d\n", a, b, result);

    result = a | b; // 61 = 0011 1101
    printf("a: %d | b: %d = %d\n", a, b, result);

    result = a ^ b; // 49 = 0011 0001
    printf("a: %d ^ b: %d = %d\n", a, b, result);

    result = ~a; // -61 = 1100 0011
    printf("~a: %d = %d\n", a, result);

    // Shift left -> fills with 0
    result = a << 2; // 240 = 1111 0000
    printf("a: %d << 2 = %d\n", a, result);

    // Shift right -> fills with 0
    result = a >> 2; // 15 = 0000 1111
    printf("a: %d >> 2 = %d\n", a, result);

    return 0;
}

/*

    ! Bitwise Logical Operators
    C offers bitwise logical operators and shift operators
        look something like the logical operators you saw earlier but are quite different
        operate on the bits in integer values

    Not used in the common program

    One major use of the bitwise AND, &, and the bitwise OR, |, is in operations to test and set individual bits in an integer variable
        can use individual bits to store data that involve one of two choices

    1 byte = 8 bits, for example: 0xFF = 1111 1111 = 255
    1 bit = 0 or 1

    You could use a single integer variable to store several characteristics of a person.
        store whether the person is male or female with one bit, 1 = male & 0 = female
        use three other bits to specify whether the person can speak French, German, or Italian.
            example: if they speak French -> French = 1 | French = 0
        another bit to record whether the person's salary is $50,000 or more
        in just four bits you have a substantial set of data recorded

    ! Binary Numbers
    a binary number is a number that includes only ones and zeroes.
    the number could be of any length
        1 byte = 8 bits
        an integer is usually 4 bytes in most platforms (32 bits)
        example:
        a) 1111 1111 1111 1111 1111 1111 1111 1111 = 4294967295 (Max value of an UNSIGNED 32-bit integer)
        b) 1111 1111 1111 1111 1111 1111 1111 1111 = 2147483647 (Max value of an SIGNED 32-bit integer)

    the following are all examples of binary numbers:
    10101 - 1 - 0101010 - 10 - 1011110101 - 01 - 0110101110 - 111000 - 000111

    Every Binary number has a corresponding Decimal value (and vice versa)
    Examples:
    Binary Number       Decimal Equivalent
    1                   1
    10                  2
    11                  3
    100                 4
    101                 5
    110                 6
    111                 7
    1000                8
    ...                 ...
    1010111             87

    each position for a binary number has a value.
    for each digit, multiply the digit by its position value
    add up all of the products to get the final result
    in general, the "position values" in a binary namber are the powers of two.

    Example:
    The 1st position value is 2^0, i.e. one
    The 2nd position value is 2^1, i.e. two
    The 3nd position value is 2^2, i.e. four
    The 4nd position value is 2^3, i.e. eight
    The 5th position value is 2^4, i.e. sixteen

    Example:
    01101001 = 1 * 2^0 + 0 * 2^1 + 0 * 2^2 + 1 * 2^3 + 0 * 2^4 + 1 * 2^5 + 1 * 2^6 + 0 * 2^7 = 105

    ! Bitwise Operators
    & - AND - bitwise AND - returns 1 if both bits are 1, otherwise 0 - Example: (A & B) = 12, i.e., 0000 1100
    | - OR - bitwise OR - returns 1 if either bit is 1, otherwise 0 - Example: (A | B) = 61, i.e., 0011 1101
    ^ - XOR - bitwise XOR - returns 1 if only one of the bits is 1, otherwise 0 - Example: (A ^ B) = 49, i.e., 0011 0001
    ~ - NOT - bitwise NOT - returns the complement of the bits - Example: (~A) = -60, i.e., -01111011
    << - Left Shift - shifts all bits left by the specified number of positions - Example: (A << 2) = 240, i.e., 1111 0000
    >> - Right Shift - shifts all bits right by the specified number of positions - Example: (A >> 2) = 15, i.e., 0000 1111

    Assume A = 60 and B = 13 in binary format, they will be as follows −
    A = 0011 1100 - B = 0000 1101
    -----------------------------
    A&B = 0000 1100, copies only the bits that are 1 in both A and B
    A|B = 0011 1101, copies the 1s of A and B
    A^B = 0011 0001, compares bit by bit and returns 1 if only one bit is 1
    ~A = 1100 0011
    A<<2 = 1111 0000
    A>>2 = 0000 1111



*/