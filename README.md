# Custom Printf Function

This repository contains a custom implementation of the `printf` function in C. The goal is to create a simplified version of the `printf` function that can handle specific conversion specifiers and produce formatted output.

## Table of Contents

- [Tasks](#tasks)
- [Description](#description)
- [Usage](#usage)
- [Supported Conversion Specifiers](#supported-conversion-specifiers)
- [Repository](#repository)

## Tasks

### Task 0

0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life
   **Mandatory**
   Score: 0.0% (Checks completed: 0.0%)

Write a function that produces output according to a format.

- Prototype: `int _printf(const char *format, ...);`
- Returns: the number of characters printed (excluding the null byte used to end output to strings)
- Write output to `stdout`, the standard output stream
- Format is a character string. The format string is composed of zero or more directives. See `man 3 printf` for more detail. You need to handle the following conversion specifiers:
    - `c`
    - `s`
    - `%`
- You don’t have to reproduce the buffer handling of the C library printf function
- You don’t have to handle the flag characters
- You don’t have to handle field width
- You don’t have to handle precision
- You don’t have to handle the length modifiers

### Task 1

1. Education is when you read the fine print. Experience is what you get if you don't
   **Mandatory**
   Score: 0.0% (Checks completed: 0.0%)

Handle the following conversion specifiers:

- `d`
- `i`
- You don’t have to handle the flag characters
- You don’t have to handle field width
- You don’t have to handle precision
- You don’t have to handle the length modifiers

## Description

The custom `_printf` function is designed to produce output according to a specific format. It takes a format string as input and can handle various conversion specifiers to format and print data. The function returns the number of characters printed (excluding the null byte used to end output to strings) and writes the output to the standard output stream (`stdout`).

## Usage

To use the `_printf` function, include the provided header file and call the function with the desired format string and arguments. The function will format the data according to the format string and print it to the standard output.

Example usage:

```c
#include "printf.h"

int main() {
    int num = 42;
    char *text = "Hello, world!";
    
    int chars_printed = _printf("Number: %d\nText: %s\n", num, text);
    printf("Total characters printed: %d\n", chars_printed);

    return 0;
}

Supported Conversion Specifiers

The custom _printf function supports the following conversion specifiers:

    %c: Print a character
    %s: Print a string
    %d, %i: Print an integer

Note that the custom implementation doesn't handle flag characters, field width, precision, or length modifiers as specified in the standard printf function.
Repository

This repository contains the code for the custom _printf function and an example usage in the main.c file. You can find the implementation in the printf.c file and the corresponding header file in printf.h.
