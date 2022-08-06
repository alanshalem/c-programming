#include <stdio.h>

int main()
{
    int i;
    char str[100];
    float f;
    double d;
    printf("Enter a value: ");
    // %d, %s, %lf: Format Specifiers
    scanf("%d %s %f %lf", &i, str, &f, &d);
    // &var is address
    printf("\nYou entered: %d::::%s:::::%f:::::%lf\n", i, str, f, d);
    return 0;
}

/*
    TODO: https://stackoverflow.com/questions/18403154/when-should-i-use-ampersand-with-scanf
    ! scanf reads particular types of data into addresses which are passed as second, third, fourth and so on arguments.

    ?   int var;
    ?   scanf("%d",&var);

    Here var is value and &var is address. The above statement says: read %d (integer) type of data into &var address.

    ?    char s[20];
    ?    scanf("%s",s);

    Here s is address not the value because s is a character array (string). An array name itself indicates its address.
    ? s == &s[0]
    , these are both the same.

    The above statement says: read %s (array of characters) type of data into address location starting from s.
*/

/*
    TODO: https://stackoverflow.com/questions/9562218/c-multiple-scanfs-when-i-enter-in-a-value-for-one-scanf-it-skips-the-second-s
    !scanf("%c") reads the newline character from the ENTER key.

    When you type let's say 15, you type a 1, a 5 and then press the ENTER key.
    So there are now three characters in the input buffer.
    ? scanf("%d")
    reads the 1 and the 5, interpreting them as the number 15, but the newline character is still in the input buffer.
    The scanf("%c") will immediately read this newline character, and the program will then go on to the next scanf("%d"),
    and wait for you to enter a number.
    The usual advice is to read entire lines of input with fgets, and interpret the content of each line in a separate step.
    A simpler solution to your immediate problem is to add a getchar() after each scanf("%d").
*/