#include "main.h"
#include <limits.h>
#include <stdio.h>

int main(void)
{
    int characters_printed;
    int characters_xprinted;

    printf("Test Cases for print_number function:\n");

    characters_printed = _printf("Number: %d\n", 123);
    printf("Characters Printed: %d\n\n", characters_printed);
    printf("\n-----------------------------------------");
    printf("\n-----------------------------------------");
    characters_xprinted = printf("Number: %d\n", 123);
    printf("Characters xPrinted: %d\n\n", characters_xprinted);

    printf("\n****************************");
    characters_printed = _printf("Number: %d\n", -456);
    printf("Characters Printed: %d\n\n", characters_printed);
    printf("\n-----------------------------------------");
    printf("\n-----------------------------------------");
    characters_xprinted = printf("Number: %d\n", -456);
    printf("Characters xPrinted: %d\n\n", characters_xprinted);

    printf("\n****************************");
    characters_printed = _printf("Number: %d\n", 0);
    printf("Characters Printed: %d\n\n", characters_printed);
    printf("\n-----------------------------------------");
    printf("\n-----------------------------------------");
    characters_xprinted = printf("Number: %d\n", 0);
    printf("Characters xPrinted: %d\n\n", characters_xprinted);

    printf("\n****************************");
    characters_printed = _printf("Number: %d\n", INT_MIN);
    printf("Characters Printed: %d\n\n", characters_printed);
    printf("\n-----------------------------------------");
    printf("\n-----------------------------------------");
    characters_xprinted = printf("Number: %d\n", INT_MIN);
    printf("Characters xPrinted: %d\n\n", characters_xprinted);

    printf("\n****************************");
    characters_printed = _printf("Number: %d\n", INT_MAX);
    printf("Characters Printed: %d\n\n", characters_printed);
    printf("\n-----------------------------------------");
    printf("\n-----------------------------------------");
    characters_xprinted = printf("Number: %d\n", INT_MAX);
    printf("Characters xPrinted: %d\n\n", characters_xprinted);

    return 0;
}
