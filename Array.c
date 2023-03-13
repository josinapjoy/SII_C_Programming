#include <stdio.h>

int main()
{

/* Demander a l'utilisateur un nombre jusau'a l'obtention de 99*/
/* Ask the user for a number up to 99*/
	int value=0;
	for (;value!=99;)
	{
		printf("Enter a value: ");
		scanf("% d", &value);	
	}
	

	/* Demande 10 nombres pour les stocker dans un tableau. Arrete l'obtention si un nombre vaut 51 */
	/* Request 10 numbers to store them in an array. Stops getting them if a number is 51 */

	int i[10];

	int guess = 0;
	for (int count = 0; (count < 10) && (guess != 51); count++)
	{
		printf("Guess un nombre not equal to 51\n");
		scanf("%d", &guess);
		i[count] = guess;
	}

	for (int count = 0; count < 10; count++)
	{
		printf("%d\n", i[count]);
	}
	
	
	
	
	
	return 0;
}