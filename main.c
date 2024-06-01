#include "main.h"
#include <stdio.h>

int main(void)
{
    _printf("Custom _printf:\n");
    _printf("Binary of 98 is: %b\n", 98);
    _printf("Binary of 255 is: %b\n", 255);
    _printf("Binary of 0 is: %b\n", 0);
    _printf("Binary of 1 is: %b\n", 1);
    _printf("Binary of 1024 is: %b\n", 1024);

    printf("Standard printf (simulated with %%s):\n");
    printf("Binary of 98 is: %s\n", "1100010");
    printf("Binary of 255 is: %s\n", "11111111");
    printf("Binary of 0 is: %s\n", "0");
    printf("Binary of 1 is: %s\n", "1");
    printf("Binary of 1024 is: %s\n", "10000000000");

    return (0);
}
