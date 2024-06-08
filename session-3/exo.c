#include <stdio.h>
#include "./rand.c"
int main() {
  int randomNumber = randMinMax(0, 100);
  printf(" Random number is : %d \n", randomNumber);
  return 0;
}
