#include <stdio.h>
#define ops 4


float add(float x, float y);
float sub(float x, float y);
float mult(float x, float y);
float divi(float x, float y);

int main()
{
	int operation;
	char choice;
	float num1, num2, result;
	float (*fnptr[ops])(float, float) = {add,sub,mult,divi}; //array of function pointers

	printf("\n");
	printf("------------------WELCOME TO CALCULATOR PROGRAM USING FUNCTION POINTERS----------------\n");
	printf("\tList of Operations:\n"
		"\tType 0 for addition:\n"
		"\tType 1 for subtraction\n"
		"\tType 2 for multiplication\n"
		"\tType 3 for division\n"
		"\tType 4 to Exit\n");
	printf("Enter the first number: ");
	scanf("%f", &num1);
	printf("Enter the second number:");
	scanf("%f", &num2);

	printf("Enter the operation you want to perform:");
	scanf("%d", &operation); 

	//scanf("%c", &choice);
	/*
	switch(choice)
	{
	case '+':
		operation = 0;
		break;	
	case'-':
		operation = 1;
		break;
	case '*':
		operation = 2;
		break;
	case '/':
		operation = 3;
		break;
	default:
		printf("OOPS! Invalid Operation\n");
	}
	//*/

	result = fnptr[operation](num1, num2);
	printf("The result of operation between %f and %f = %f\n", num1,num2,result);

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
	return x * y;
}
float divi(float x, float y)
{
	if(y==0)
	{
		printf("Zero Division Error");
	}
	else
	{
		return x / y;
	}
}










