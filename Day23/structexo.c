#include <stdio.h>
#define MAX 30
#define SIZE 2

void copier(struct personne*);
void compare(struct personne *);
void display(struct personne*);

typdef struct 
{
	char nom[MAX];
	char prenom[MAX];
	int age;
}personne;

int main()
{

	struct personne  person1	= {"joy","josina",28};
	struct personne* ptr1		= &person1;
	struct personne* ptr2		= &person2;

	copier(&person1, &person2);
	display(&person1);

	return 0;
}
void copier(struct personne* ptr1, struct personne* ptr2)
{

	memcpy(ptr1, ptr2, sizeof(struct personne));
}
void display(struct personne* ptr2) 
{
	printf("Last Name of the person : %s\n", ptr2->nom);		
	printf("First Name of the person : %s\n", ptr2->prenom);	
	printf("Age of the person : %d\n", ptr2->age);
}
void compare(struct personne person)
{

}
