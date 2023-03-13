#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
	int i, j;
	char word[20] = "flower";
	int len = strlen(word);          //length of string
	char guess[30];
	memset(guess, '_', len);
	guess[len] = '\0';
	int tries = 0;

	printf("\n");
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
        printf("%s\n", guess);                         // asking for inputs
        if (strcmp(words[index], guess) == 0) {
            printf("CONGRATULATIONS!, you guessed the word!\n");
            break;
        }
        if (!correct) {
            tries++;
            printf("WRONG GUESS, TRY AGAIN! You have %d tries left.\n", 6 - tries);
        }
    }
    if (tries == 6) {
        printf("Sorry, you ran out of tries. The word was %s.\n", words[index]);
    }
	return 0;
}