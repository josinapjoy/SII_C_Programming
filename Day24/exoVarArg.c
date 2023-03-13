// Input is like
// char myfun(4,'+',2,'-',1);
// result should be like result of operation , in the above example example it is 3

#include <stdio.h>
#include <stdarg.h>
double myfun(int num, ...);

typedef struct {
	char sign;
	double value ;
}number;

int main()
{
	number number1 = { '+',5 };
	number number2 = { '-',1 };

	myfun(2, number1, number2);

	//printf("TEST %lf", myfun(2, number1, number2));
	return 0;
}
double myfun(int num, ...)
{
	va_list arg_ptr;						//Putting on memory the list of arguments
	int count;
	double result,input;					//Initilaising two variables
	
	va_start(arg_ptr,num);

	for (count =0; count< num; count++)
	{
		printf("");


	}
	va_end(arg_ptr);
	

	return result;
}