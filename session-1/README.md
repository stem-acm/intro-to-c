# "Hello, World!" Program in C

The code in the "hello.c" file is a simple C program that prints "Hello, World!" to the screen. Let's break it down line by line:

1. `#include <stdio.h>`
   - This line tells the compiler to include the standard input/output library.
   - This library contains functions for reading input and writing output, like `printf`.

2. `int main() {`
   - This line declares the main function, which is the entry point of every C program.
   - The `int` before `main` indicates that the function will return an integer value.

3. `printf("Hello, World!\n");`
   - `printf` is a function used to print text to the screen.
   - The text in quotes is what will be printed: "Hello, World!"
   - The `\n` at the end is a special character that creates a new line after the text.

4. `return 0;`
   - This line returns the value 0 to the operating system.
   - A return value of 0 usually indicates that the program ran successfully.

5. `}`
   - This closing curly brace marks the end of the `main` function.

When you run this program, it will simply display "Hello, World!" on the screen and then exit.


# Primitive Data Types

The code in the "primitives.c" file shows the use of various primitive data types and how to print them. Let's break it down:

1. `int main() {`
   - This declares the main function, the entry point of the program.

2. Primitive type declarations:
   - `int integerVariable = 10;`
     - Declares an integer variable and assigns it the value 10.
   - `char charVariable = 'A';`
     - Declares a character variable and assigns it the value 'A'.
   - `float floatVariable = 3.14;`
     - Declares a floating-point variable and assigns it the value 3.14.
   - `double doubleVariable = 2.71828;`
     - Declares a double-precision floating-point variable and assigns it the value 2.71828.
   - `short shortVariable = 5;`
     - Declares a short integer variable and assigns it the value 5.
   - `long longVariable = 1234567890;`
     - Declares a long integer variable and assigns it a large value.
   - `long long longLongVariable = 9876543210;`
     - Declares a very long integer variable and assigns it an even larger value.

3. Printing the variables:
   - The program uses `printf` to print each variable.
   - Each `printf` statement uses a format specifier (like `%d`, `%c`, `%f`) to indicate how to print the variable.
   - `\n` at the end of each format string creates a new line.

4. Format specifiers used:
   - `%d`: for int
   - `%c`: for char
   - `%f`: for float
   - `%lf`: for double
   - `%hd`: for short
   - `%ld`: for long
   - `%lld`: for long long

5. `return 0;`
   - Returns 0 to indicate successful program execution.

This program demonstrates how to declare variables of different primitive types in C and how to print them to the console using appropriate format specifiers.