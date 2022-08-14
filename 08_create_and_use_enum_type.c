#include <stdio.h>

int main()
{
    // ENUM
    enum company
    {
        GOOGLE,     // 0
        XEROX,      // 1
        FACEBOOK,   // 2
        YAHOO = 10, // 10
        EBAY,       // 11
        MICROSOFT,  // 12
    };

    enum company xeroxCompany = XEROX;
    enum company googleCompany = GOOGLE;
    enum company ebayCompany = EBAY;

    printf("%d %d %d\n", xeroxCompany, googleCompany, ebayCompany);
    return 0;
}