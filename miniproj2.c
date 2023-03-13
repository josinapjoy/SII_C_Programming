/* 5 etudiants qui peuvent avoir notes,Ajouter à un etudiant une note, Afficher la moyenne d'un étudiant*/
#include <stdio.h>

#define student_count 5;
#define notes_count 5;


int Main_Menu();
int Selection();
int Student_Record(student_name);
char Student_name();
float Average();
int selection = 0;
int notes;
char student_name;

int main()
{   

	Main_Menu();
	Selection();
	return 0;
}

int Main_Menu()
{
	do
	{
		printf("Welcome to the Main Menu\n");
		printf("------------------------------------------\n");
		printf("Type 1 to add notes\n ");
		printf("Type 2 to edit the notes\n ");
		printf("Type 3 to display the average \n");
		printf("Type 4 yet to decide\n");
		printf("Type 5 EXIT \n");
		scanf("%d", &selection);
	} 
	while (selection < 1 || selection>5);
	return selection;	
}

int Selection()
{
	if (selection == 1)
	{
		printf("selection %d\n",selection);
		Student_name();
		printf("Student Name : %c", student_name);
	}
	else if(selection==2)
	{
		
		printf("selection %d", selection);
		Student_name();
		printf("%c", student_name);

	}
	else if (selection == 3)
	{
		printf("The average of your 3score is\n");

	}
	else if (selection == 4)
	{
		printf("The average of your 4score is\n");
	}
	else
	{
		return 0;
	}
}
char Student_name() //Tested and Working
{
	char student_name;
	printf("List of students name : \n");
	printf("A\nB\n\C\nD\nE\n");
	scanf("%c",&student_name);
	printf("Student Name : %c", student_name);

	Student_Record(student_name);
	
	return student_name;

}


int Student_Record(student_name)
{   
	
	if (student_name == 'A' || 'a')
	{
		int a[5] = 0;  //int a[notes_count] = 0;
	}
	else if (student_name == 'B' || 'b')
	{
		int b[5] = 0;
	}
	else if (student_name == 'C' || 'c')
	{
		int c[5] = 0;
	}
	else if (student_name == 'D' || 'd')
	{
		int d[5] = 0;
	}
	else if (student_name == 'E' || 'e')
	{
		int e[5] = 0;
	}
	else
	{
		printf("Enter a valid name.\n");
	}

}

int Add_notes() {
	int notes = 0;
	do {
		int b[5];
		for (int i = 0; i < 5; i++)
		{
			printf("Enter your notes in between 0 & 20\n");
			scanf("%d", &notes);
			b[i] = notes;
		}

	} while (notes < 0 && notes > 20);
	return notes;
}

int Avg_notes() {
	int avg = 0;
	do {
		int a[5];
		for (int i = 0; i < 5; i++)
		{
			avg = avg + a[i];
		}
		avg = avg / 5;

	} while (notes < 0 && notes > 20);
	return avg;
}