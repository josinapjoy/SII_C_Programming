#include <stdio.h>

int main()
{
	int size;
	printf("Enter the size of the pyramid : ");
	scanf("%d", &size);
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < 2 * size - 1; j++)
		{
			if (j >= size - (i - 1) && j <= size + (i - 1))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}

		}

		printf("\n");
	}

	return 0;
}