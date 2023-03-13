

#include <stdio.h>
#include <string.h>
void func1(int x);
void one(void);
void two(void);
void other(void);

int main()
{
	int a;
	for (;;)
	{
		if (a == 0) break;
	}

	return 0;
}
void one(void)
{
	puts("You entered one");
}
void two(void)
{
	puts("You entered two");
}
void other(void)
{
	puts("You entered other than one and two");
}

void func1(void)
{
	//void *
}
