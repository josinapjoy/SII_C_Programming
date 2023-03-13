#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_WORD_LENGTH 20
#define MAX_NUM_GUESSES 6

char get_guess();
void display_word(char* word, int* guesses, char guess);
void display_guesses(int* guesses);
int is_word_complete(char* word, int* guesses);
void display_result(int result, char* word);

int main() {
    char words[][MAX_WORD_LENGTH] = { "apple", "banana", "cherry", "durian", "elderberry", "fig", "grape" };
    int num_words = sizeof(words) / sizeof(words[0]);
    srand(time(NULL));
    int random_index = rand() % num_words;
    char* word = words[random_index];
    int word_length = strlen(word);
    int guesses[word_length];
    memset(guesses, 0, sizeof(guesses));
    int num_guesses = 0;
    while (num_guesses < MAX_NUM_GUESSES && !is_word_complete(word, guesses)) {
        printf("Guess a letter: ");
        char guess = get_guess();
        int found = 0;
        for (int i = 0; i < word_length; i++) {
            if (word[i] == guess) {
                guesses[i] = 1;
                found = 1;
            }
        }
        if (!found) {
            num_guesses++;
            printf("Incorrect guess.\n");
        }
        display_word(word, guesses, guess);
        display_guesses(guesses);
    }
    int result = is_word_complete(word, guesses) ? 1 : 0;
    display_result(result, word);
    return 0;
}

char get_guess() {
    char guess;
    scanf(" %c", &guess);
    return guess;
}

void display_word(char* word, int* guesses, char guess) {
    printf("Word: ");
    for (int i = 0; i < strlen(word); i++) {
        if (guesses[i]) {
            printf("%c", word[i]);
        }
        else {
            printf("-");
        }
    }
    printf("\n");
}

void display_guesses(int* guesses) {
    printf("Guesses: ");
    for (int i = 0; i < MAX_NUM_GUESSES; i++) {
        if (guesses[i]) {
            printf("%c ", 'a' + i);
        }
        else {
            printf("_ ");
        }
    }
    printf("\n");
}

int is_word_complete(char* word, int* guesses) {
    for (int i = 0; i < strlen(word); i++) {
        if (!guesses[i]) {
            return 0;
        }
    }
    return 1;
}

void display_result(int result, char* word) {
    if (result) {
        printf("Congratulations, you guessed the word \"%s\"!\n", word);
    }
    else {
        printf("Sorry, you ran out of guesses. The word was \"%s\".\n", word);
    }
}