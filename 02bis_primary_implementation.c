// https://stackoverflow.com/questions/49099976/how-do-you-define-functions-in-header-files
/* primary_impl.c */
#include "02bis_primary_header.h"
#include <stdio.h>

void main()
{
    primary();
}

/* Define the primary workhorse function */
void primary()
{
    /* do the main work */
    printf("I'm the primary function, I'm doin' work.\n");

    /* also get some help from the helper function */
    helper();
}

void helper()
{
    printf("I'm a helper function and I helped!\n");
}