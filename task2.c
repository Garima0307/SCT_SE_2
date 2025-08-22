
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess;

    srand(time(0));
    number = rand() % 100 + 1;

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have picked a number between 1 and 100.\n");

    while (1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if (guess < number) {
            printf("Too low! Try again.\n");
        } else if (guess > number) {
            printf("Too high! Try again.\n");
        }else {
            printf(" Correct! You guessed the number %d\n", number);
            break;
        }
    }

    return 0;
}