// La portée de la variable 


#include <stdio.h>
void print();
void print1();
int x = 3;

int main()
{

	int a = 3;
	x = 6;

	print();
	printf("\n");

	print1();
	printf("\n");

	print1();
}

void print()
{
	int count = 0;
	x++;                           //count++
	printf("%d\n", x);             // printf("%d\n", count);   
}

void print1()
{
	int count = 0;
	count++;                           //count++
	printf("%d\n", count);             // printf("%d\n", count); 

	static int count1 = 0;
	count1++;
	printf("%d\n", count1);
}