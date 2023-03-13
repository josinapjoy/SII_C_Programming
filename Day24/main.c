#include <stdio.h>
#include <stdarg.h>  //always use this to use macros for variabe arguemnts
float moyenne(int num, ...);

int main()
{

	printf("The average is %f ",moyenne(4, 2, 3, 4, 5));

	return 0;
}

float moyenne(int num, ...)
{
	va_list arg_ptr;
	int count, total = 0;
	va_start(arg_ptr,num);
	for (count = 0; count < num; count++)
	{
		total += va_arg(arg_ptr, int);
	}

	va_end(arg_ptr);
	return  (float)(total / num);

}