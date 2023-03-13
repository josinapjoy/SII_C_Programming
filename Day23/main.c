#include <stdio.h>
int* largest(int* x, int* y);
int largest2(int x, int y);
int main()
{
	int num1, num2;
	printf("Enter two numbers");
	scanf("%d %d", &num1, &num2);

	largest(&num1, &num2);
	largest2(num1, num2);
	return 0;
}
int* largest(int* x, int* y)
{
	if (*x>*y)
	{
		printf("%d is greater %d (pointer output)\n",*x,*y);
		return x;
	}
	else
	{
		printf("%d is not greater than %d (pointer output)\n", *x,*y);
	}
}
int largest2(int x, int y)
{
	if (x > y)
	{
		printf("%d is greater than %d\n", x, y);
		return x;
	}
	else
	{
		printf("%d is not greater than %d \n", x, y);
	}
}


