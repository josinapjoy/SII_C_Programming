#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main() {
    // List of words h
    char words[20] ="almond";
    //int num_words = sizeof(words) / sizeof(words[0]);                      

    int len = strlen(words);
    char guess[20];
    memset(guess, '_', len);
    guess[len] = '\0';
    int attempts = 0;

    printf("------------ Welcome to the Word Guessing Game --------------- \n");
    printf("The word has %d letters. You have 6 tries to guess the word.\n", len);

    while (attempts < 6) {
        printf("Guess a letter: ");
        char letter;
        scanf(" %c", &letter);
        int correct = 0;
        for (int i = 0; i < len; i++) {
            if (words[i] == letter) {
                guess[i] = letter;
                correct = 1;
            }
        }
        printf("%s\n", guess);                        
        if (strcmp(words, guess) == 0) { 
            printf("CONGRATULATIONS!, you guessed the word!\n");
            break;
        }
        if (!correct) {
            attempts++;
            printf("WRONG GUESS, TRY AGAIN! You have %d tries left.\n", 6 - attempts);
        }
    }
    if (attempts == 6) {
        printf("OOPS, you ran out of tries. The word was %s.\n", words);
    }
    return 0;
}