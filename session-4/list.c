#include <stdio.h>
#define SECOND_LIST_LENGHT 4


int main() {
  int firstList[] = {1, 5, 7, 9, 5};
  
  int firstListLength = sizeof(firstList) / sizeof(firstList[0]);
  printf("Length of firstList : %d\n\n", firstListLength);
  printf("List 1 >>>>>\n\n");
  
  for (int i = 0; i < firstListLength; i++) {
    printf("index %d : %d\n",i ,firstList[i]);
  }
  
  int secontList[SECOND_LIST_LENGHT] = { 5, 5, 4, 4 };
  printf("List 2 >>>>>\n\n");
  
  for (int i = 0; i < SECOND_LIST_LENGHT; i++) {
    printf("index %d : %d\n", i, secontList[i]);
  }

  secontList[0] = 10;
  secontList[3] = 10;
  printf("List 2 after updates >>>>>\n\n");
  for (int i = 0; i < SECOND_LIST_LENGHT; i++) {
    printf("index %d : %d\n", i, secontList[i]);
  }
  return 0;
}
