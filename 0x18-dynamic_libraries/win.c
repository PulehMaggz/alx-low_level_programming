#include <stdio.h>
#include <stdlib.h>

int rand(void) {
    static int i = 0;
    int winning_numbers[] = {9, 8, 10, 24, 75, 9}; // The numbers you need to win

    return winning_numbers[i++ % 6];
}

