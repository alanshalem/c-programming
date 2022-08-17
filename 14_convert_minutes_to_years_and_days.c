#include <stdio.h>
#include <stdlib.h>

int main()
{
    int minutes = 0;
    double days = 0.0, years = 0.0, minutesInYear = 0.0, minutesInDay = 0.0;
    // If we don't initialize the double variables as .0, the program will not work properly.

    printf("Enter the number of minutes: ");
    scanf("%d", &minutes);
    // 1 day = 24 hours = 1440 minutes
    // 1 year = 365 days = 525600 minutes
    minutesInDay = (60 * 24);
    minutesInYear = (60 * 24 * 365);

    days = (minutes / minutesInDay);
    // double = (int/double)
    years = (minutes / minutesInYear);
    // double = (int/double)
    printf("%d minutes is approximately %f days and %f years.\n", minutes, days, years);

    return 0;
}

/*
Requirements:
    In this challenge, you are to create a C program that converts the number of minutes to days an
    years
    The program should ask the user to enter the number of minutes via the terminal
    The program should display as output the minutes and then its equivalent in years and days
    The program should create variables to store (shoulá all be of type double)
    minutes (int) - minutes in years - Years - Days
    Need to perform a calculation and use arithmetic operators
    You have to figure out the conversions
*/