#include <stdio.h>
#include <stdbool.h>
#define formatBool(b) ((b) ? "true" : "false")
int main()
{

    int integerVar = 100;
    float floatingVar = 331.79;
    double doubleVar = 8.44e+11;
    _Bool boolVar = 1; // 0 false - 1 true
    bool anotherBoolVar = false;

    printf("%i\n", integerVar);
    printf("%f\n", floatingVar);
    printf("%f\n", doubleVar);
    printf("%i\n", boolVar);
    printf("%i\n", anotherBoolVar);
    printf("%s\n", formatBool(boolVar));
    printf("%s\n", formatBool(anotherBoolVar));
    return 0; // return 0 - no errors - return 1 - error
}

/* Some examples of basic data types in C are:
        ! int - float - double - char - _Bool
    the difference between the types is in the amount of memory they occupy and the range of values they can hold
    the amount of storage that is allocated to store a particular type of data
    depends on the computer you are running (machine-dependent)
    an integer might take up 32 bits on your computer, or perhaps it might be stored in 64

    TODO: int:
    A variable of type int can be used to contain integral values only (values that do not contain decimal places)
    a minus sign preceding the data type and variable indicates that the value is negative

    the int type is a signed integer
        it must be an integer and it can be posive, negative or zero

    if an integer is preceded by a zero and the letter x (either lowercase or uppercase), the value is taken
    as being expressed in hexadecimal (base 16) notation
        ? int rgbColor = OxFFEFOD;

    the values 158, -10, and 0 are all valid examples of integer constants

    no embedded spaces are permitted between the digits

    values larger than 999 cannot be expressed using commas (12,000 must be written as 12000)

    TODO: float:
    A variable to be of type float can be used for storing floating-point numbers
    (values containing decimal places)

    the values 3., 125.8, and -.0001 are all valid examples of floating-point
    constants that can be assigned to a variable

    floating-point constants can also be expressed in scientific notation
        1.7e4 is a floating-point value expressed in this notation and represents
        the value 1.7x10 to the power of 4

    TODO: double:
    the double type is the same as type float, only with roughly twice the
    precision
        used whenever the range provided by a float variable is not sufficient
        can store twice as many significant digits
        most computers represent double values using 64 bits

    all floating-point constants are taken as double values by the C compiler

    To explicitly express a float constant, append either an f or F to the end of the
    number
        12.5f

    TODO: _Bool
    the _Bool data type can be used to store just the values 0 or 1
        used for indicating an on/off, yes/no, or true/false situation (binary -
        choices)

    _Bool variables are used in programs that need to indicate a Boolean
    condition
        a variable of this type might be u_ed to indicate whether all data has
        been read from afile

    0 is used to indicate a false value
    1 indicates a true value

    C89 Standard -> _Bool myBoolean = 1 | 0;
    C99 Standard -> #include <stdbool.h> -> bool myBoolean = true
    ! Using true and false in C
    https://stackoverflow.com/questions/2254075/using-true-and-false-in-c

    TODO: Adjective keywords
    Adjective keywords to modify the basic integer type (can also be used by itself)
        short, long, and unsigned
    ej: short int, long int, unsigned int, short double, long double, short, long, etc...
    ! https://stackoverflow.com/questions/16863826/whats-the-difference-between-long-float-and-double-in-c#:~:text=The%20long%20float%20is%20a,It%20is%20not%20deprecated.
    ! Be careful with short float and long float, they were removed on C89, it is synonymous with double.

    The type short int, or short may use less storage than int, thus saving space when only small numbers are needed
        can be used when the program needs a lot of memory and the amount of available memory is limited

    The type long int, or long, may use more storage than int, thus enabling you to express larger integer values

    The type long long int, or long long may use more storage than long.
        A constant value of type long int is formed by optionally appending the letter L (upper-or lowercase) onto the end of an integer
        constant
            ? long int numberOfPoints = 131071100L;

    Type specifiers can also be applied to doubles
        ? long double US_deficit_2017;

    A long double constant is written as a floating constant with the letter l or L immediately following
    ? 1.234e+7L

    The type unsigned int, or unsigned, is used for variables that have only nonnegative values (positiv(
        unsigned int counter;
        the accuracy of the integer variable is extended

    The keyword signed can be used with any of the signed types to make your intent explicit
        short, short int, signed short, and signed short int are all names for the same type
        ? short = short int = signed short = signed short int
*/