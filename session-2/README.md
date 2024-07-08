Let's explain the code in each file.

File: hello.c

```c
#include <stdio.h>
```
This line includes a standard library called "stdio.h". It contains functions for input and output, which are necessary for reading from the keyboard (scanf) and displaying text on the screen (printf).

```c
int main() {
    char name;
    int age;
    printf("What is your name? ");
    scanf("%s", &name);
    printf("Hello %s!\n", &name);
    printf("What is your age ?");
    scanf("%d", &age);
```
In the main function, two variables are defined: a character array for storing the name and an integer for storing the age. The program then prompts the user to input their name and age using the `printf` and `scanf` functions. Note that `&name` is used instead of `name` because scanf expects the memory address (a pointer) where it should store the input value, not the variable itself. However, this code will not work correctly due to a single character variable being used to store a string.

```c
    if (age > 18) {
        printf("you are damn old %s\n", &name);
    } else if (age > 12 && age <= 18) {
        printf("you are young %s\n", &name);
    } else {
        printf("you are a kid %s\n", &name);
    }
```
The program then checks the age and prints different messages based on the condition. However, `&name` is used again instead of `name`. This will cause undefined behavior because `%s` expects a null-terminated string (which requires an array of characters) but only a single character is provided.

```c
    return 0;
}
```
The main function returns 0 to indicate that it has executed successfully.

File: calc.c

```c
#include <stdio.h>
```
This line includes the "stdio.h" standard library for input and output operations as mentioned earlier.

```c
int main() {
    int a = 10;
    int b = 3;
    int sum = a + b;
    int mul = a * b;
    float div = a / b;
    int mod = a % b;
    printf(" a + b :%d \n", sum);
    printf(" a x b :%d \n", mul);
    printf(" a / b :%f \n", div);
    printf(" a modulo b :%d \n", mod);
    return 0;
}
```
In the main function, two integer variables `a` and `b` are initialized with values 10 and 3. The program then performs various arithmetic operations (+, *, /, %) and stores the results in appropriate variables (sum, mul, div, mod). Afterwards, it uses printf to display the results on the screen. Note that `%f` is used for `div` because floating-point numbers require a different format specifier than integers.

In conclusion, there are several issues in the "hello.c" file that need to be fixed. The character variable should be replaced with a character array (e.g., `char name[50]`), and `&name` should be replaced with `name` in printf statements. This code is meant to demonstrate basic arithmetic operations, and it does so without any issues.