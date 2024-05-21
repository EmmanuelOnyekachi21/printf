#include <stdio.h>
#include <limits.h>
#include "../main.h"

int main(void)
{
    int chars_printed;
    int chars_xprinted;

    chars_printed = _printf("Character: %c\n", 'A');
    printf("Chars printed: %d\n\n", chars_printed);
    printf("----------------------------------\n");
    chars_xprinted = printf("Character: %c\n", 'A');
    printf("chars_xprinted: %d\n\n", chars_xprinted);

    chars_printed = _printf("String: %s\n", "Hello, world!");
    printf("Chars printed: %d\n\n", chars_printed);
    printf("----------------------------------\n");
    chars_xprinted = printf("String: %s\n", "Hello, world!");
    printf("Chars xprinted: %d\n\n", chars_xprinted);

    chars_printed = _printf("Percentage: %%\n");
    printf("Chars printed: %d\n\n", chars_printed);
    printf("----------------------------------\n");
    chars_xprinted = printf("Percentage: %%\n");
    printf("Chars xprinted: %d\n\n", chars_xprinted);

    printf("----------------------------------\n");
    _printf(NULL);
    printf(NULL);
    printf("----------------------------------\n");

    _printf("Hello World%"); 
    printf("Hello World%"); 

    printf("----------------------------------\n");
    _printf("String: %s\n", NULL);
    printf("String: %s\n", NULL);

    printf("----------------------------------\n");
    _printf("Unknown specifier: %x\n", 123);
    printf("Unknown specifier: %x\n", 123);
    printf("----------------------------------\n");

    _printf("INT_MAX: %d\n", INT_MAX);
    _printf("INT_MAX: %d\n", INT_MAX); 
    printf("----------------------------------\n");
    _printf("INT_MIN: %d\n", INT_MIN);
    printf("INT_MIN: %d\n", INT_MIN); 
    printf("----------------------------------\n");

    _printf("Zero: %d\n", 0);

    return (0);
}
