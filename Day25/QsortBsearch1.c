#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PERSON_SIZE 2
#define MAX_FIRST_NAME_LENGTH 20
#define MAX_LAST_NAME_LENGTH 20

//getDetails(person);
displayPerson(Person* ptr1);
displayPersons(Person* ptr1, Person* ptr2);

typedef struct {
	char firstName[MAX_FIRST_NAME_LENGTH];
	char lastName[MAX_LAST_NAME_LENGTH];
	int	 age;
} Person;

int main()
{
	Person person1 = { "Josina","Palamoottil Joy",28}; 
	Person person2 = { "Jerry","John",31 };
	Person* ptr1 = &person1;
	Person* ptr2 = &person2;
	displayPerson(ptr1);
	displayPersons(ptr1, ptr2);

	return 0;
}

displayPerson(Person *ptr)   //it is better to pass address
{
	printf("----------Personal Data-----------------\n");
	printf("First Name: %s\nLast Name: %s\nAge: %d\n",ptr->firstName, ptr->lastName, ptr->age);
}
displayPersons(Person* ptr1, Person* ptr2)
{
	printf("----------Personal Data-----------------\n");
	printf("First Name: %s\nLast Name: %s\nAge: %d\n", ptr1->firstName, ptr1->lastName, ptr1->age);
	printf("\n");
	printf("First Name: %s\nLast Name: %s\nAge: %d\n", ptr2->firstName, ptr2->lastName, ptr2->age);
}

int comparePersons(const void* a, const void* b) {
	const struct Person* person1 = (const struct Person*)a;
	const struct Person* person2 = (const struct Person*)b;

	// Compare by last name first
	int lastNameComparison = strcmp(person1->lastName, person2->lastName);
	if (lastNameComparison != 0) {
		return lastNameComparison;
	}

	// If last names are equal, compare by first name
	int firstNameComparison = strcmp(person1->firstName, person2->firstName);
	if (firstNameComparison != 0) {
		return firstNameComparison;
	}
