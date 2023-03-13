#include <stdio.h>

int main()
{
	int input1 =0;
	int input2=0;
	printf("Enter the first value: \n");
	scanf("%d", &input1);
	printf("Enter the second value: \n");
	scanf("%d", &input2);
	
	if (input2<input1)
	{
		printf("The first number %d is greater than the second number %d \n", input1, input2);
	}
	else if (input2>input1)
	{
		printf("The first number %d is less than the second number %d\n",input1,input2);
	}
	else
	{
		printf("Both the entered values are equal :%d \n",input1);
	}
	

	/* 
	 -----------------------------  Logical operators    -----------------------

	if (c<d && (a< b || a< c))
	
	*/
	
	return 0;
}
