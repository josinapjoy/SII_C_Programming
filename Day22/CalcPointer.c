#include <stdio.h>
#include <stdlib.h>
#define ops 4

float add(float x, float y);
float sub(float x, float y);
float divi(float x, float y);
float mult(float x, float y);

int main()
{
	char operation,choice;
	float num1, num2, result;
	float(*fnptr[ops])(float, float) = {add,sub,mult,divi}; //array of function pointers
	

	printf("\n");
	printf("------------------WELCOME TO CALCULATOR PROGRAM USING FUNCTION POINTERS----------------\n");
	printf("\tList of Operations:\n"
		"\tType + for addition:\n"
		"\tType * for multiplication\n"
		"\tType / for division\n"
		"\tType - for subtraction\n"
		"\tType e to Exit\n");
	printf("Enter the first number: ");
	scanf("%f", &num1);
	printf("Enter the second number:");
	scanf("%f", &num2);
	printf("Enter the operation you want to perform:\n");
	scanf("%c", &operation);



	
	result = fnptr[ops](num1, num2,operation);
	printf("%.2f %c %.2f = %.2f\n", num1, operation, num2, result);

	return 0;
}

float add(float x, float y)
{
	return x + y;
}
float sub(float x, float y)
{
	return x - y;
}
float mult(float x, float y)
{
	return x + y;
}
float divi(float x, float y)
{
	if (!y)
	{
		printf("Zero Division Error");
	}
	else 
	{ return x / y;
	}
}