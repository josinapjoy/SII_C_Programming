
#include <stdio.h>
//objective : to write a function to add two arrays and keep the value in the first array
// indicate the siwe of the array
//
#define tailleMx 50
void sum_tabs(int* ptb1, int* ptb2, int taille);


int main()
{

	int tab1[] = { 1, 2, 3, 4 };
	int tab2[] = { -1,-2,-3,-4 };
	int tab[3];


	int taille = sizeof(tab1) / sizeof(tab1[0]);
	printf("The size of the array is %d\n", taille);
	sum_tabs(tab1, tab2, taille);

	return 0;

}

void operator(int lem1, int elem2, int* addresstab3)
{

}


void modification(int* ptb1, int* ptb2, int* ptb3, int taille) // to save the address of the result of this function 
{
	int tab3[tailleMx];
	for (int i = 0; i < taille; i++)       // entering into first loop
	{
		operator(ptb1[i],ptb2[i],&ptb3[i]);
		
	}

}



void sum_tabs(int* ptb1, int* ptb2, int taille)
{
	for (int i = 0; i < taille; i++)       // entering into first loop
	{
		ptb1[i] += ptb2[i];
		printf("%d", ptb1[i]); //error
	}

}


