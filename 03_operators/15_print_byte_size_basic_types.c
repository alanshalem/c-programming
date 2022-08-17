#include <stdio.h>
#include <stdlib.h>

int main()
{
    // format specifier C99 %zd is used to print the size of the variable in bytes
    // format specifier %u is used to print the size of the variable in bytes
    printf("sizeof(int) = %zd\n", sizeof(int));
    printf("sizeof(char) = %u\n", sizeof(char));
    printf("sizeof(long) = %zd\n", sizeof(long));
    printf("sizeof(long long) = %zd\n", sizeof(long long));
    printf("sizeof(double) = %zd\n", sizeof(double));
    printf("sizeof(long double) = %zd\n", sizeof(long double));
    return 0;
}

/*
Requirements
    In this challenge, you are to create a C program that displays the byte size of basic data types supported inc
    The output varies depending on the system you are running the program
    Display the byte size of the following types
        Int - char - long - long long - double - long double
    You can use the %zd format specifier to format each size
    Use the sizeof operator
    Test on more than one computer to see the differences
    */