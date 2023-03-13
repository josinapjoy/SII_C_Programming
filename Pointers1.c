#include <stdio.h>

int main()
{
	/*int var = 100;
	int* ptr;
	ptr = &var;*/

	int a[5] = {0,1,2,3,4 };
	int* aptr;
	aptr=a;      // aptr =&a[0];
	int first_element = *aptr;
	printf("%d\n", *aptr);
	printf("%p\n", aptr);
	int* aptr2 = (a+1);
	printf("%d\n", *aptr2);
	printf("%p\n", aptr2);
	int difference =  aptr2 - aptr;
	printf("%d\n", difference);

/*	// Accès direct ete indirect à var

	printf("Direct value, var =%d\n", *ptr);
	printf("Direct value, var =%d\n", var);

	// Accès l'address

	printf("address, var =%p\n", ptr);
	printf("address, var =%p\n", &var);
*/





	return 0;
}