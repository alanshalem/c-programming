#include <stdio.h>

int main()
{
    // ENUM
    enum company
    {
        GOOGLE,
        XEROX,
        FACEBOOK,
        YAHOO,
        EBAY,
        MICROSOFT,
    };

    enum company xeroxCompany = XEROX;
    enum company googleCompany = GOOGLE;
    enum company ebayCompany = EBAY;

    printf("%d %d %d\n", xeroxCompany, googleCompany, ebayCompany);
    return 0;
}