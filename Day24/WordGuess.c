// Word Guessing Game
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char word[] = "Apple";
    char guess[30];
    int guessCount = 0;
    int guessLimit = 3;
    int outOfGuesses = 0;

    printf("Welcome to Guessing Game!\n You get 3 tries to guess the fruit.\n Good luck!\n");

    while (guess != word && outOfGuesses == 0) {
        if (guessCount < guessLimit) {
            printf("\nEnter the name:");
            scanf("%s", guess);
            guessCount++;
        }
        else {
            outOfGuesses = 1;
        }
    }

    if (guess != word) {
        printf("You lose!");
    }
    else {
        printf("Congratulations! You win!");
    }

    return 0;
}