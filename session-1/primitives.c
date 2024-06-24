#include <stdio.h>

int main() {
    // Primitive types in C
    int integerVariable = 10;
    char charVariable = 'A';
    float floatVariable = 3.14;
    double doubleVariable = 2.71828;
    short shortVariable = 5;
    long longVariable = 1234567890;
    long long longLongVariable = 9876543210;
    
    // Printing primitive types to console
    printf("Integer: %d \n", integerVariable);
    printf("Character: %c \n", charVariable);
    printf("Float: %f\n", floatVariable);
    printf("Double: %lf\n", doubleVariable);
    printf("Short: %hd\n", shortVariable);
    printf("Long: %ld\n", longVariable);
    printf("Long Long: %lld\n", longLongVariable);
    
    return 0;
}
