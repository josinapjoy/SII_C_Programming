#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NB_CHANCES 11
#define LEN_WORD 30

char alph[26] = { 'a', 'b', 'c', 'd', 'e', 'f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
char alphMaj[26] = { 'A', 'B', 'C', 'D', 'E', 'F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };

void init_guess(char* word, char* start);
int life(int nb_live_left);
char majToMin(char saisie);
int check_if_letter_in_word(char saisie, char* word, char* hidden);
void remplacer(int position, char* word, char* hidden);
int letter_already_out(char* guessed, char saisie);
char user_input(char* guessed);

int main() {
	char secret[LEN_WORD] = "bombyx";			// Declaration et initialisation du mot a deviner.
	char guess[LEN_WORD];						// Declaration du mot "masque" que l'utilisateur verra.
	char letter_guessed[26] = "\0";				// Initialisation de la liste des lettres déjà dites.
	init_guess(secret, guess);					// guess contient autant de '_' qu'il y a de lettres dans secret.
	int nb_lives = NB_CHANCES;					// Initialisation du nombre de vies
	int already_said;
	int win = 1;								// 1 par défaut, vaudra 0 lorsque secret == guess et qu'on aura win.
	char letter;
	while (1) {
		printf("Vies restantes: %d\n", nb_lives);
		printf("Mot a deviner: %s\n", guess);
		letter = user_input(letter_guessed);
		int in_word = check_if_letter_in_word(letter, secret, guess);
		switch (in_word) {
		case 0:									// La lettre saisie n'est pas dans le mot.
			printf("\nSo long !\n");
			nb_lives = life(nb_lives);
			break;
		case 1:									// La lettre saisie est dans le mot.
			win = strcmp(secret, guess);
			if (win == 0) {
				printf("Bravo ! Tu as devine le mot %s !\n", guess);
				exit(EXIT_SUCCESS);
			}
			printf("\nBravo !\n");
			break;
		}
		printf("Deja dit: %s\n", letter_guessed);
	}
	return 0;
}

void init_guess(char* word, char* start) {
	int length = strlen(word);
	int i;
	for (i = 0; i < length; i++) {
		start[i] = '_';
	}
	start[i] = '\0';
}

int life(int nb_live_left) {
	nb_live_left--;
	if (nb_live_left == 0) {
		printf("GAME OVER\n");
		exit(0);
	}
	return nb_live_left;
}

char majToMin(char saisie) {
	for (int i = 0; i < 26; i++) {
		if ((saisie == alph[i]) | (saisie == alphMaj[i])) {
			return alph[i];
		}
	}
	return saisie;
}

void remplacer(int position, char* word, char* hidden) {
	hidden[position] = word[position];
}

int check_if_letter_in_word(char saisie, char* word, char* hidden) {
	int length = strlen(word);
	int letter_in_word = 0;        // booléen: 0 si faux, 1 si vrai
	for (int i = 0; i < length; i++) {
		if (word[i] == saisie) {
			remplacer(i, word, hidden);
			letter_in_word = 1;
		}
	}
	return letter_in_word;
}

int letter_already_out(char* guessed, char saisie) {
	int length = strlen(guessed);
	for (int i = 0; i < length; i++) {
		if (guessed[i] == saisie) {
			printf("Tu as deja dit cette lettre, recommence.\n");
			return(1);
		}
	}
	//strcat(guessed, saisie);     // TODO: reparer le strcat, si possible.
	guessed[length] = saisie;
	guessed[length + 1] = '\0';
	return(0);
}

char user_input(char* guessed) {
	int already_said = 1;
	char saisie;
	while (already_said == 1) {
		scanf("%c", &saisie);
		while ((getchar() != '\n'));
		saisie = majToMin(saisie);
		already_said = letter_already_out(guessed, saisie);
	}
	return saisie;
}


/*
2 chaines de carac:
une avec le mot à deviner
l'autre avec _ _ _ _ _ _
Utilisateur saisie une lettre
Conversion majuscule en minuscule
si pas une lettre: -1 vie
fonction: -1 vie, qui fait game over si vie == 0




*/

