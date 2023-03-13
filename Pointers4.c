#include <stdio.h>

int main()
{
	int age = 25;

	int* ptr = &age;

	printf(" The address is %p\n", ptr);
	printf(" The address(&) is %p\n", &age);

	printf(" The value is %d\n", *ptr);
	printf(" The value is %d\n", age);
	*ptr = 32;
	printf(" The modified value is %d\n", *ptr);
	printf(" The modified value  using age is %d\n", age);

	printf(" The address after changing value is %p\n", ptr);
	printf(" The address(&) after chnging value is %p\n", &age);

	
	/* Invalid Syntaxes
	* ptr =age ;
	*  *ptr = &age
	*/


	/* double salary = 30;
	double* ptr_salary = &salary;

	printf("Old salary is %lf");*/


	int numbers[5] = { 1, 3, 5, 7, 9 };

	for (int i = 0; i < 5; ++i) {
		printf("%d = %p\n", numbers[i], &numbers[i]);
	}

	printf(" the address of %d is %p\n", numbers[0], &numbers[0]);
	printf(" the address of %d is %p\n", numbers[0], numbers);

	printf(" the address of %d is %p\n", numbers[0], numbers+1);  // address of second element
	printf(" the address of %d is %p\n", numbers[0], numbers+2); // address of third element


	for (int i = 0; i < 5; ++i) {
		printf("%d = %p\n", numbers[i], numbers+i);
	}
	for (int i = 0; i < 5; ++i) {
		printf("%d = %p\n", *(numbers+i), numbers + i);
	}


	int arr[] = { 34,56,24 };

	int largest = *arr;

	for (int i = 1; i < (sizeof(arr) / sizeof(int)); i++)
	{
		if (largest < *(arr + i))
		{
			largest = *(arr + i);
		}
	}
	printf("the largest value of the array is %d", largest);



	return 0;
}