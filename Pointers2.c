#include <stdio.h>

int main()
{
	double a[5] = {0,1,2,3,4 };
	double* aptr;
	aptr = a;      // aptr =&a[0];

	int first_element = *aptr;
	printf("%lf\n", *aptr);
	printf("%p\n", aptr);

	double* aptr2 = (a + 1);
	printf("%lf\n", *aptr2);
	printf("%p\n", aptr2);

	double difference = aptr2 - aptr;
	printf("%lf\n", difference);
	return 0;

} //345 397 982 904
//345 397 982 912