#include <stdio.h>

int largest(int x[], int y);
int largest2(int *x, int y);
int largest3(int *x, int y);

int main()
{
	int tab[5] = { 1,2,3,4,5 };
	int biggest = largest(tab,5);


	return 0;
}
int largest(int x[], int y) //int largest(int *x, int y)
{
	int count = 1;
	int biggest = x[0];
	for(;count<y;count++)
	{
		if (x[count]> biggest) // if *(x+count) > biggest)
		{
			biggest = x[count];
		}
	}
	return biggest;
}


int largest3(*x, int y) //int largest(int *x, int y)
{
	int count = 1;
	int biggest = *x;
	for (; count < y; count++)
	{
		if ((*(x + count)) > biggest) // if *(x+count) > biggest)
		{
			biggest = *(x + count);
		}
	}
	return biggest;
}