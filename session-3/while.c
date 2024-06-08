#include <stdio.h>

int main() {
  int counter = 0;
  
  printf("Starting count!\n");

  while (counter <= 10) {
    printf("Count: %d\n", counter);
    counter = counter + 1;
  }

  printf("Counting finished!\n");

  return 0;
}