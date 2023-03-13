#include <stdio.h>
#include <stdlib.h>
#include <string.h>


float add(float x, float y);
float sub(float x, float y);
float divi(float x, float y);
float mult(float x, float y);
//float calculator(char operation, float x, float y);

int main()
{
	char operation;
	float num1, num2, result;
	float (*calculator)(float, float);  //Function Pointer declaration

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


	switch (operation)
	{
	case '+':
		calculator = add;
		break;
	case '-':
		calculator = sub;
		break;
	case '*':
		calculator = mult;
		break;
	case '/':
		calculator = divi;
		break;
	case 'e':
		break;
	default:
		printf("Please enter valid operation\n");
		break;
	}
	result = calculator(num1, num2);
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
	if (!y) printf("Zero Division Error");
	else { return x / y;}
}

void 



	



