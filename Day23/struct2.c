#include <stdio.h>
#define MAX 15
#define SIZE 2

struct donation
{
	char nom[MAX];
	char prenom[MAX];
	float don;
};
int main()
{
	struct donation perso[SIZE];

	int i;
	for (i = 0; i < SIZE; i++)
	{
		printf("Details of person %d\n",i + 1);
		printf("Enter your Nom: ");
		scanf("%s",					&perso[i].nom);
		printf("Enter your Prenom: ");
		scanf("%[^\n]",				&perso[i].prenom);
		printf("Enter the amount of donation: ");
		scanf("%f",					&perso[i].don);
		printf("\n");
	}

	for (i = 0; i < SIZE; i++)
	{
		printf("Details of Person %d:\n",i+1);
		printf("Nom: %s",				perso[i].nom);
		printf("Prenom: %s",			perso[i].prenom);
		printf("Donated Amount %f €",	perso[i].don);
	}



	
}