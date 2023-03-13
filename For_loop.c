#include <stdio.h>

int main()
{
	int count = 20;
	int count2 = 0;
	for (printf("start\n"); count >= 0; count -= 5, count2 += 5)
	{
		printf("%d --- %d \n", count, count2);
	}





	return 0;
}