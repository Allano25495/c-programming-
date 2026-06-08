#include <stdio.h>

int main() {
    int i, square, sum = 0;

    printf("Odd numbers between 1 and 50 and their squares:\n");

    for (i = 1; i <= 50; i += 2) {
        square = i * i;
        sum = sum + square;

        printf("%d squared = %d\n", i, square);
    }

    printf("\nSum of the squares of odd numbers = %d\n", sum);

    return 0;
}
