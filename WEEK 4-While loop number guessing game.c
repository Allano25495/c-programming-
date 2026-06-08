#include <stdio.h>

int main() {
    int secretNumber = 12;
    int guess = 0;
    int attempts = 0;

    printf("Guess the number between 1 and 20:\n");

    while (guess != secretNumber) {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if (guess > secretNumber) {
            printf("Too high!\n");
        }
        else if (guess < secretNumber) {
            printf("Too low!\n");
        }
        else {
            printf("Congratulations!\n");
        }
    }

    printf("Number of attempts: %d\n", attempts);

    return 0;
}
