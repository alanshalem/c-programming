#include <stdio.h>
#include <stdbool.h>
#define formatBool(b) ((b) ? "true" : "false")

int main()
{
    // ENUM
    enum gender
    {
        male,
        female
    };
    enum gender myGender;

    myGender = male;

    enum gender anotherGender = female;

    bool isMale = (myGender == anotherGender);

    printf("%s", formatBool(isMale));

    // CHAR
    char myCharacter = '\n';
    char asciiCharacter = 75;
    printf("%c %c", myCharacter, myCharacter);
    printf("%c", asciiCharacter);

    return 0;
}
/*
    TODO:
    Enums:
    a data type that allows a programmer to define a variable and specify the valid values that could be
    stored into that variable
        -can create a variable named “myColor” and it can only contain one of the primary colors, red,
        yellow, or blue, and no other values

    Your first have to define the enum type and give it a name
        -initiated by the keyword enum
        -then the name of the enumerated data type)
        -then list of identifiers (enclosed in a set of curly braces) that define the permissible values that
        can be assigned to the type

    ? enum primaryColor { red, yellow, blue };

    variables declared to be of this data type can be assigned the values red, yellow, and blue inside the
    program, and no other values

    To declare a variable to be of type enum primaryColor:
    -use the keyword enum
    -followed by the enumerated type name
    -followed by the variable list. So the statement
        ? enum primaryColor myColor, gregsColor;
    defines the two variables myColor and gregsColor to be of type primaryColor
        -the only permissible values that can be assigned to these variables are the names red,
        -yellow, and blue
        ? myColor = red;
    Another example
        ? enum month { January, February, March, April, May, June, July, August, September, October, November, December };

    TODO: Enums as ints
    the compiler actually treats enumeration identifiers as integer constants
        first name in list is 0

    ? enum month thisMonth;
    ...
    ? thisMonth = February;

    the value 1 is assigned to thisMonth (and not the name February) because it is the second identifier listed inside the
    enumeration list

    if you want to have a specific integer value associated with an enumeration identifier, the integer can be assigned to the
    identifier when the data type is defined

    ? enum direction { up, down, left = 10, right };

    * an enumerated data type direction is defined with the values up, down, left, and right
    * up = 0 because it appears first in the list
    * 110 down because it appears next
    * 10 to left because it is explicitly assigned this value
    * 11 to right because it appears immediately after left in the list

    TODO: Char

    Chars represent a single character such as the letter 'a’, the digit character '6’, or a semicolon (';')

    Character literals use single quotes such as ‘A ‘or ‘Z’

    You can also declare char variables to be unsigned
        can be used to explicitly tell the compiler that a particular variable is a signed quantity

    We will talk about a character string in another lecture, much different than a single character

    Declaring a char

    ? char broiled; declare a char variable
    ? broiled = 'T"; OK
    ? broiled = T; NO! Thinks T is a variable
    ? broiled = "T"; NO! Thinks "T"is a string

    If you omit the quotes, the compiler thinks that T is the name of a variable

    If you use double quotes, it thinks you are using a string

    you can also use the numerical code to assign values

    ? char grade = 65; ok for ASCII, but poor style

    C contains special characters that represent actions
        backspacing
        going to the next line
        making the terminal bell ring (or speaker beep)

    We can represent these actions by using special symbol sequences
        called escape sequences

    Escape sequences must be enclosed in single quotes when assigned to a character variable
    ? char x ='\n';
    and then print the variable x to advance the printer or screen one line

    All the escape characters:
    \a - \b - \f - \n - \r - \t - \v - \\ - \' ⁻ \" - \? - \0oo - \xhh
*/