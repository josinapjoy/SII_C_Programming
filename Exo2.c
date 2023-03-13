#include <stdio.h>

int main()
{
	/* Demande 10 nombres pour les stocker dans un tableau. Arrete l'obtention si un nombre vaut 51 */
	/* Request 10 numbers to store them in an array. Stops getting them if a number is 51 */

	int i[10];
	int count = 0;
	int guess = 0;
	for (; (count < 10) && (guess != 51); count++)
	{
		printf("Guess un nombre not equal to 51\n");
		scanf("%d", &guess);
		i[count] = guess;
	}

	for (int count2 = 0; (count2 < 10) && (guess != 51); count++)
	{
		printf("Guess un nombre not equal to 51\n");
		scanf("%d", &guess);
		i[count] = guess;
	}


	return 0;
}