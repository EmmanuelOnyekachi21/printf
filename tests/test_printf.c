#include <stdio.h>
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

    return (0);
}

