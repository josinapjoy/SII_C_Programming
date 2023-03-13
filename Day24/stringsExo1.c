#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char words[][20] = { "apple", "banana", "cherry", "date", "elderberry", "fig", "grape" };
    int num_words = sizeof(words) / sizeof(words[0]);
    srand(time(NULL));
    int index = rand() % num_words;
    int len = strlen(words[index]);
    char guess[30];
    memset(guess, '_', len);
    guess[len] = '\0';
    int tries = 0;
    printf("------------ Welcome to the Word Guessing Game --------------- \n");
    printf("The word has %d letters. You have 6 tries to guess the word.\n", len);
    while (tries < 6) {
        printf("Guess a letter: ");
        char letter;
        scanf(" %c", &letter);
        int correct = 0;
        for (int i = 0; i < len; i++) {
            if (words[index][i] == letter) {
                guess[i] = letter;
                correct = 1;
            }
        }
        printf("%s\n", guess);
        if (strcmp(words[index], guess) == 0) {
            printf("Congratulations, you guessed the word!\n");
            break;
        }
        if (!correct) {
            tries++;
            printf("Wrong! You have %d tries left.\n", 6 - tries);
        }
    }
    if (tries == 6) {
        printf("Sorry, you ran out of tries. The word was %s.\n", words[index]);
    }
    return 0;
}