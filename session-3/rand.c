#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randMinMax(int min, int max) {
    // Seed the random number generator
    srand(time(NULL));

    // Generate a random integer
    int random_int = rand();
    return min + rand() % (max - min + 1);
}