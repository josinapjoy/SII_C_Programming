#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PERSONS 5
#define MAX_FIRST_NAME_LENGTH 20
#define MAX_LAST_NAME_LENGTH 20

int comparePersons(const void* a, const void* b);

typedef struct{
    char firstName[MAX_FIRST_NAME_LENGTH];
    char lastName[MAX_LAST_NAME_LENGTH];
    int  age;
}Person;

int comparePersons(const void* a, const void* b) {
    const Person* personA = (const Person*)a;
    const Person* personB = (const Person*)b;

    int lastNameComparison = strcmp(personA->lastName, personB->lastName);     // Compare by last name first
    if (lastNameComparison != 0) {
        return lastNameComparison;
    }

    int firstNameComparison = strcmp(personA->firstName, personB->firstName);  // If last names are equal, compare by first name
    if (firstNameComparison != 0) {
        return firstNameComparison;
    }

    if (personA->age < personB->age) {                                        // If first and last names are equal, compare by age
        return -1;
    }
    else if (personA->age > personB->age) {
        return 1;
    }
    return 0;
}

int main() {
    Person persons[MAX_PERSONS];   //array of struct
    int numPersons = 0;

    //Length of struct
    int len_struct = sizeof(persons);
    printf("%d\n", len_struct);

    // Entering Details of Persons
    // Person 1
    strcpy(persons[numPersons].firstName, "Josina");
    strcpy(persons[numPersons].lastName, "Palamoottil Joy");
    persons[numPersons].age = 28;
    numPersons++;
    // Person 2
    strcpy(persons[numPersons].firstName, "Jerry");
    strcpy(persons[numPersons].lastName, "John");
    persons[numPersons].age = 31;
    numPersons++;
    // Person 3
    strcpy(persons[numPersons].firstName, "Ammu");
    strcpy(persons[numPersons].lastName, "Kutty");
    persons[numPersons].age = 25;
    numPersons++;
    // Sort the persons by last name, first name, and age
    qsort(persons, numPersons, sizeof(Person), comparePersons);

    // Search for a person by last name, first name, and age
    Person keyPerson;
    //findPerson(&keyperson);

    strcpy(keyPerson.firstName, "Josina");
    strcpy(keyPerson.lastName, "Palamoottil Joy");
    keyPerson.age = 28;

    Person* foundPerson = bsearch(&keyPerson, persons, numPersons, sizeof(Person), comparePersons);

    if (foundPerson != NULL) {
        printf("Found person: %s %s, %d years old\n", foundPerson->firstName, foundPerson->lastName, foundPerson->age);
    }
    else {
        printf("Person not found.\n");
    }
    return 0;
}
/*
findPerson(Person* ptr)
{

}*/