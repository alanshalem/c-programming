#include <stdio.h>
int main(void)
{
    int integerVar = 100;
    float floatingVar = 331.79;
    double doubleVar = 8.44e+11; // 8.44*10^11
    char charVar = 'W';
    _Bool boolVar = 0;
    printf("integerVar = %i\n", integerVar);
    printf("floatingVar = %f \nfloatingVar 2 decimals = %.2f\nfloatingVar rounding = %2.f\n", floatingVar, floatingVar, floatingVar);
    printf("doubleVar = %e\n", doubleVar);
    printf("doubleVar = %g\n", doubleVar);
    printf("charVar = %c\n", charVar);
    printf("boolVar = %i\n", boolVar);
    return 0;
}
/*
    Format Specifiers
    format specifiers are used when displaying variables as output
    they specify the type of data of the variable to be displayed
        ? int sum = 89;
        ? printf ("The sum is %d\n", sum);
        The printf() function can display as output the values of variables
            -has two items or arguments enclosed within the parentheses
            -arguments are separated by acomma
            -first argument to the printf() routine is always the character string to be displayed
            -along with the display of the character string, you might also frequently want to have the value of certain
            program variables displayed

        The percent character inside the first argument is a special character recognized by the printf() function
            the character thatimmediately follows the percent sign specifies what type of value is to be displayed
*/