#include <stdio.h>

int main()
{
    // Cast and sizeof operators

    int x = 0;
    float floatToCast = 12.125;
    x = floatToCast;
    printf("x = %d\n", x); // x = 12
    int castedVariables = (int)21.51 + (int)26.99;
    // 21 + 26 = 47
    printf("castedVariables = %d\n", castedVariables); // castedVariables = 51

    // sizeof operator returns the size of a variable in bytes
    float f = 1.0;
    int i = 1;
    double d = 1.0;
    char c = 'a';

    printf("****************************************************\n");
    printf("VARIABLES\n");
    printf("****************************************************\n");
    printf("sizeof(f): %d\n", sizeof(f)); // 4 bytes
    printf("sizeof(i): %d\n", sizeof(i)); // 4 bytes
    printf("sizeof(d): %d\n", sizeof(d)); // 8 bytes
    printf("sizeof(c): %d\n", sizeof(c)); // 1 byte
    printf("****************************************************\n");
    printf("DATA TYPES\n");
    printf("****************************************************\n");
    printf("sizeof(char): %d\n", sizeof(char));           // 1 byte
    printf("sizeof(int): %d\n", sizeof(int));             // 4 bytes
    printf("sizeof(float): %d\n", sizeof(float));         // 4 bytes
    printf("sizeof(double): %d\n", sizeof(double));       // 8 bytes
    printf("sizeof(long): %d\n", sizeof(long));           // 8 bytes
    printf("sizeof(long long): %d\n", sizeof(long long)); // 8 bytes
    printf("sizeof(short): %d\n", sizeof(short));         // 2 bytes
    printf("sizeof(unsigned): %d\n", sizeof(unsigned));   // 4 bytes
    printf("sizeof(signed): %d\n", sizeof(signed));       // 4 bytes
    printf("sizeof(void): %d\n", sizeof(void));           // 1 byte
    printf("****************************************************\n");
    printf("POINTERS\n");
    printf("****************************************************\n");
    printf("sizeof(char *): %d\n", sizeof(char *));           // Pointer = 8 bytes
    printf("sizeof(int *): %d\n", sizeof(int *));             // Pointer = 8 bytes
    printf("sizeof(float *): %d\n", sizeof(float *));         // Pointer = 8 bytes
    printf("sizeof(double *): %d\n", sizeof(double *));       // Pointer = 8 bytes
    printf("sizeof(long *): %d\n", sizeof(long *));           // Pointer = 8 bytes
    printf("sizeof(long long *): %d\n", sizeof(long long *)); // Pointer = 8 bytes
    printf("sizeof(short *): %d\n", sizeof(short *));         // Pointer = 8 bytes
    printf("sizeof(unsigned *): %d\n", sizeof(unsigned *));   // Pointer = 8 bytes
    printf("sizeof(signed *): %d\n", sizeof(signed *));       // Pointer = 8 bytes
    printf("sizeof(void *): %d\n", sizeof(void *));           // Pointer = 8 bytes
    printf("****************************************************\n");
    printf("ARRAYS\n");
    printf("****************************************************\n");
    printf("sizeof(char[10]): %d\n", sizeof(char[10]));           // 1byte * 10 = 10bytes
    printf("sizeof(int[10]): %d\n", sizeof(int[10]));             // 4bytes * 10 = 40bytes
    printf("sizeof(float[10]): %d\n", sizeof(float[10]));         // 4bytes * 10 = 40bytes
    printf("sizeof(double[10]): %d\n", sizeof(double[10]));       // 8bytes * 10 = 80bytes
    printf("sizeof(long[10]): %d\n", sizeof(long[10]));           // 8bytes * 10 = 80bytes
    printf("sizeof(long long[10]): %d\n", sizeof(long long[10])); // 8bytes * 10 = 80bytes
    printf("sizeof(short[10]): %d\n", sizeof(short[10]));         // 2bytes * 10 = 20bytes
    printf("sizeof(unsigned[10]): %d\n", sizeof(unsigned[10]));   // 4bytes * 10 = 40bytes
    printf("sizeof(signed[10]): %d\n", sizeof(signed[10]));       // 4bytes * 10 = 40bytes
    // ! printf("sizeof(void[10]): %d\n", sizeof(void[10])); // Compile error, array of void is not allowed

    return 0;
}

/*
    ! Cast and Sizeof Operators
    ! Type Conversions
    conversion of data between different types can happen automatically (implicit conversion) by the language or explicit by the program
        to effectively develop C programs, you must understand the rules used for the implicit conversion of floating-point and integer values in C

    Normally, you shouldn't mix types, but there are occasions when it is useful
        remember, c is flexible, gives you the freedom, but, do not abuse it

    Whenever a floating-point value is assigned to an integer variable in C, the decimal portion of the
    number gets truncated

    ? int x = 0;
    ? float f = 12.125;
    ? x = f;  value stored in x is the number 12, only the int portion is stored

    assigning an integer variable to a floating variable does not cause any change in the value of the number
        value is converted by the system and stored in the floating variable
    when performing integer arithmetic
        If two operands in an expression are integers then any decimal portion resulting from a division
        operation is discarded, even if the result is assigned to a floating variable
        If one operand is an int and the other is a float then the operation is performed as a floating
        point operation

    ! The Cast Operator
    As mentioned, you should usually steer clear of automatic type conversions, especially of demotions
        better to do an explicit conversion
    it is possible for you to demand the precise type conversion that you want
        called a cast and consists of preceding the quantity with the name of the desired type in parentheses
        parentheses and type name together constitute a cast operator, i.e. (type)
        The actual type desired, such as long, is substituted for the word type

    The type cast operator has a higher precedence than all the arithmetic operators except the unary
    minus and unary plus

    ? (int)21.51 + (int)26.99
    is evaluated in C as
    ? 21+26

    ! sizeof operator
    -You can find out how many bytes are occupied in memory by a given type by using the sizeof operaton
        -sizeof is a special keyword in C
    -sizeof is actually an operator, and not a function
        -evaluated at compile time and not at runtime, unless a variable-length array is used in its argument
    -The argument to the sizeof operator can be a variable, an array name, the name of a basic data type,
    the name of a derived data type, or an expression
    -sizeof(int) will result in the number of bytes occupied bya variable of type int
    -You can also apply the sizeof operator to an expression
        -result is the size of the value that results from evaluating the expression
    -Use the sizeof operator wherever possible to avoid having to calculate and hard-code sizes into your
    program

    ! Other operators
    *the asterisk "*" is an operator that represents a pointer to a variable.
    *a
    -?: is an operator used for comparisons
        -If Condition is true ? then value X: otherwise value Y
        -name is the ternary operator

*/