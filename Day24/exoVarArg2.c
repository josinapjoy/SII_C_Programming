#include <stdio.h>
#include <stdarg.h>

char test(int num, ...);
number myfun(int num, ...);

typedef struct
{
	char sign;
	double value;
}number;

int main()
{
	number number1 = { '+',5 };
	number number2 = { '-',1 };

	myfun(2, number1, number2);
	test(4, '+', 3, '-', '1');
	return 0;
}
number myfun(int num, ...)
{
	va_list arg_ptr;						//Putting on memory the list of arguments
	int count;
	double result, input;					//Initilaising two variables
	va_start(arg_ptr, num);

	for (count = 0; count < num; count++)
	{
		printf("result");
	}
	va_end(arg_ptr);
	return result;
}
char test(int num, ...)
{
	va_list arg_ptr;								//Putting on memory the list of arguments
	int count;
	double result, input;							//Initilaising two variables

	va_start(arg_ptr, num);
	for (count = 0; count < num; count++)
	{
		printf("the entered values are %c \n", va_arg(arg_ptr, char));
	}
	va_end(arg_ptr);
	//return result;
}


/*
 #include <stdio.h>

int max(int a, int b, int (*comp)(int, int)) {
  if (comp(a, b) < 0) {
     return b;
  } else {
     return a;
  }
}

int mycomp(int a, int b) {
  return a < b ? -1 : 1;
}

int main() {
  printf("%d %d\n", max(1, 2, mycomp), max(2, 1, mycomp));
}
*/