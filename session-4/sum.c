#include <stdio.h>

int sumFunc(int array[], int arrayLength) {
  int sum = 0;
  for (int i = 0; i < arrayLength; i++) {
    sum += array[i];
  }
  return sum;
}

int main() {
  int array[] = {1, 1, 1, 1, 1};
  int sum = 0;
  int length = sizeof(array) / sizeof(array[0]);
  for (int i = 0; i < length; i++) {
    sum += array[i];
  }
  printf("sum is %d \n", sum);
  printf("sum calculated from function is %d \n", sumFunc(array, length));
  return 0;
}
