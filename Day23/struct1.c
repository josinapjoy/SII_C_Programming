#include <stdio.h>
#define MAX 15

struct donation
{
	char nom[MAX];
	char prenom[MAX];
	float don;
}perso1;
int main()
{
	printf("Enter your Nom: ");
	scanf("%[^\n]", &perso1.nom);
	printf("Enter your Prenom: ");
	scanf("%s", &perso1.prenom);
	printf("Enter the amount of donation: ");
	scanf("%f", &perso1.don);
	printf("Hello %s %s, your donation is %f", perso1.prenom, perso1.nom, perso1.don);
	return 0;
}