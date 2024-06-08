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
