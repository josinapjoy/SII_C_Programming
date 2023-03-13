#include <stdio.h>
#include <string.h>

int multi[2][4];
int tab[4];
int* ptr_tab[4];

int main()
{
	int a=1, b=1, c=1, d=1, e =1;
	tab[0] = a;
	tab[1] = b;
	tab[2] = c;
	tab[3] = d;

	ptr_tab[0] = &a;
	ptr_tab[1] = &b;
	ptr_tab[2] = &c;
	ptr_tab[3] = &d;

	for (int i = 0; i < 4; i++)
	{
		printf("The value of %d element is %d\n", i+1, tab[i]);
	}
	for (int i = 0; i < 4; i++)
	{
		printf("The address of %d is %p \n",i+1, ptr_tab[i]);
	}

	return 0;
}