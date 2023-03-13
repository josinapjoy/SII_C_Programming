#include <stdio.h>

int enternote(int note);
float moyenne(float moy);
char nom;

int main()

{
	/* 5 etudiants qui peuvent avoir notes
	- Ajouter à un etudiant une note
	- afficher la moyenne d'un étudiant
	*/
	int  selection = 0;
    char students[5] = { 'a', 'b', 'c', 'd', 'e' };
	int marks[5] = [];
	int i;
	int  selection = 0;
	do
	{
		printf("Welcome to the Notes Menu");
		printf("Type 1 to enter your name, if you are a student ");
		printf("Type 2 to add notes ");
		printf("Type 3 to display the average ");
		printf("Type 4 if you are a non eleve");
		printf("Type 5 to exit");
		scanf("%d", &selection);
	} while (selection < 1 || selection>5);
	return selection;

	if (selection == 1)
	{   
		scanf("%c", &nom);
		if (nom == students)
		{
			printf("Your name is in the register");
		}
		else
		{
			printf("Enter a valid name");
		}
	}

	return 0;
}
/* Function to enter the notes*/
int enternote(int marks[]) 
{
	for (int j = 0; j < 5; j++)
	{
		printf("Enter the note \n");
		scanf("%d", &marks[j]);
	}
}
/* Function to find the average */
float moyenne(float moy)
{
	for (int k = 0, k< 5;k++)
	{

	}
}