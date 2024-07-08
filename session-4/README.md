list.c:

1. `#include <stdio.h>` : This is a preprocessor directive that includes the standard input-output library in your program. It allows you to use functions like printf for displaying output.
2. `int main() { ... }`: This is the main function where the execution of a program starts.
3. `int firstList[] = {1, 5, 7, 9, 5};`: Here we declare an integer array named firstList and initialize it with some values.
4. `int firstListLength = sizeof(firstList) / sizeof(firstList[0]);`: Here, we calculate the length of the firstList array by dividing the total size of the array (sizeof(firstList)) by the size of one element in the array (sizeof(firstList[0])).
5. `for (int i = 0; i < firstListLength; i++) { ... }`: This is a for loop that iterates over each element in the firstList array and prints its index and value.
6. Similarly, we have another integer array secontList[] and we do similar operations like finding its length, printing all elements, updating specific elements, and printing updated elements.

sum.c:

1. `#include <stdio.h>`: This includes the standard input-output library in your program.
2. `int sumFunc(int array[], int arrayLength) { ... }`: Here we declare a function named sumFunc that takes an integer array and its length as arguments and returns the sum of all elements in the array.
3. `int main() { ... }`: This is the main function where the execution of a program starts.
4. `int array[] = {1, 1, 1, 1, 1};`: Here we declare an integer array named array and initialize it with some values.
5. We calculate the sum of all elements in the array using a for loop and also by calling the function sumFunc().