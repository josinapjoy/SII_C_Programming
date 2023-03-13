#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PERSONS 5
#define MAX_FIRST_NAME_LENGTH 20
#define MAX_LAST_NAME_LENGTH 20

struct Person {
    char firstName[MAX_FIRST_NAME_LENGTH];
    char lastName[MAX_LAST_NAME_LENGTH];
    int  age;
};

int comparePersons(const void* a, const void* b) {
    const struct Person* personA = (const struct Person*)a;
    const struct Person* personB = (const struct Person*)b;

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
    struct Person persons[MAX_PERSONS];                         //arry of struct
    int numPersons = 0;
    // Add some sample persons
    strcpy(persons[numPersons].firstName, "Josina");
    strcpy(persons[numPersons].lastName, "Palamoottil Joy");
    persons[numPersons].age = 28;
    numPersons++;

    strcpy(persons[numPersons].firstName, "Jerry");
    strcpy(persons[numPersons].lastName, "John");
    persons[numPersons].age = 31;
    numPersons++;

    strcpy(persons[numPersons].firstName, "Ammu");
    strcpy(persons[numPersons].lastName, "Kutty");
    persons[numPersons].age = 25;
    numPersons++;

    // Sort the persons by last name, first name, and age
    qsort(persons, numPersons, sizeof(struct Person), comparePersons);

    // Search for a person by last name, first name, and age
    struct Person keyPerson;
    strcpy(keyPerson.firstName, "Josina");
    strcpy(keyPerson.lastName, "Palamoottil Joy");
    keyPerson.age = 28;

    struct Person* foundPerson = bsearch(&keyPerson, persons, numPersons, sizeof(struct Person), comparePersons);

    if (foundPerson != NULL) {
        printf("Found person: %s %s, %d years old\n", foundPerson->firstName, foundPerson->lastName, foundPerson->age);
    }
    else {
        printf("Person not found.\n");
    }
    return 0;
}