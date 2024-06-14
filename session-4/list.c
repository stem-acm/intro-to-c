#include <stdio.h>
#define MAX_SIZE 100

int len(int list[]) {
  return sizeof(&list) / sizeof(int);
}

int main()
{
  int myList[] = {0, 5, 7};
  printf("%d\n", len(myList));
  for (int i = 0; i <= len(myList); i++) {
    printf("%d\n", myList[i]);
  }

  return 0;
}

