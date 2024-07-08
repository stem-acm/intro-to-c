File name: for.c

This code is written in C and it prints numbers from 0 to 10 inclusively. Here's the explanation of the code:

```c
#include <stdio.h>
```
This line includes the standard input-output library which allows the program to perform input and output operations.

```c
int main() {
    printf("Starting count!\n");
    for (int counter = 0; counter <= 10; counter++) {
        printf("Count: %d\n", counter);
    }

    printf("Counting finished!\n");

    return 0;
}
```
This part of the code is the main function. It first prints "Starting count!" to notify that the counting has started. Then it enters a for loop which initializes a variable `counter` at 0 and increments it until it reaches 10 (inclusive). Inside the loop, it prints "Count: %d" where %d is replaced by the current value of the counter. After the loop finishes, it prints "Counting finished!" and then returns 0 to indicate the successful execution of the program.

File name: rand.c

This code defines a function `randMinMax(int min, int max)` which generates a random integer between `min` and `max`. Here's the explanation of the code:

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
```
These lines include necessary libraries for standard input-output, general purpose functions (like random number generation), and time manipulation respectively.

```c
int randMinMax(int min, int max) {
    // Seed the random number generator
    srand(time(NULL));

    // Generate a random integer
    int random_in  = rand();
    return min + random_in % (max - min + 1);
}
```
This part of the code defines the `randMinMax` function. First, it seeds the random number generator with the current time to ensure we get different results each time we run the program. Then, it generates a random integer and returns a value between `min` and `max`.

File name: exo.c

This code is written in C and it generates a secret number between 0 and 100 and asks the user to guess it. If the user's guess is less than or greater than the secret number, the program gives a hint. Here's the explanation of the code:

```c
#include <stdio.h>
#include "./rand.c"
int main() {
  int randomNumber = randMinMax(0, 100);
  int userAnswere;

  while (randomNumber != userAnswere) {
    printf("Guess the secret number between 0 and 100 ! \n");
    scanf("%d", &userAnswere);
    if (randomNumber > userAnswere ) {
      printf("The secret number is greater \n");
    } else if (randomNumber < userAnswere) {
      printf("The secret number is smaller \n");
    }
  }

  printf("Congratulation, the secret number was indeed : %d \n", randomNumber);
  return 0;
}
```
This part of the code is the main function. It first generates a random number between 0 and 100 using the `randMinMax` function. Then it enters a while loop which continues until the user guesses the correct number. Inside the loop, it prompts the user to guess the secret number, reads the user's input, and gives a hint depending on whether the user's guess is less than or greater than the secret number. After the loop finishes (when the user guesses correctly), it congratulates the user and prints the secret number.