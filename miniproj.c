#include <stdio.h>

char Student_name();
char student_name;

int main()
{
	/* 5 etudiants qui peuvent avoir notes
	- Ajouter à un etudiant une note   - afficher la moyenne d'un étudiant*/
	Student_name();
	printf("Student Name is : %c", student_name);

	return 0;
}
char Student_name()
{
	//char student_name;
	printf("Students List\n");
	printf("A\nB\n\C\nD\nE\n");
	scanf("%c", &student_name);
	printf("Student Name : %c\n", student_name);
	return student_name;

}