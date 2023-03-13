#include <stdio.h>
#include <assert.h>

int main()
{
	int x = 5;
	assert(x == 5);
	printf("x is %d", x);

	int y = 10;
	assert(y == 5);
	printf("y is %d", y);

	return 0;
}