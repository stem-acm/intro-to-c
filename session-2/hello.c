#include <stdio.h>

int main() {
    char name;
    int age;
    printf("What is your name? ");
    scanf("%s", &name);
    printf("Hello %s!\n", &name);
    printf("What is your age ?");
    scanf("%d", &age);
    
    if (age > 18) {
        printf("you are damn old %s\n", &name);
    } else if (age > 12 && age <= 18) {
        printf("you are young %s\n", &name);
    } else {
        printf("you are a kid %s\n", &name);
    }
    return 0;
}