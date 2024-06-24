#include <stdio.h>

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