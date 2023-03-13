#include <stdio.h>
int main()
{
	/*
	int i = 0;

	while (i < 5)
	{
		printf("%d\n", i);
		i++;
	}
	
	

/* Demander a l'utilisateur un nombre jusau'a l'obtention de 99*/
/* Ask the user for a number up to 99 
	int i = 0;
	while (i!= 99)
	{
		printf("Enter a number which is not equal to 99: \n");
		scanf("%d", &i);
	}
	*/
/* Demande 10 nombres pour les stocker dans un tableau. Arrete l'obtention si un nombre vaut 51 */
/* Request 10 numbers to store them in an array. Stops getting them if a number is 51 */

	int i[10];
	int guess = 0;
	int count = 0;
	while ((count < 10) && (guess != 51))
	{
		intf("Enter a number which is not equal to 51: \n");
		scanf("%d", &i);
		i[count]=guess;
		count++;
	}



	return 0;
}

