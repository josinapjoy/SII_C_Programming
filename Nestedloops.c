#include <stdio.h>
void printrect(int l, int b);
int main()
{
	
	printrect(2, 5);
	return 0;
}

void printrect(int b, int l)
{
	for (int i = 0; i < b; i++)
	{
		
		for (int j = 0; j < l; j++)
		{
			printf(" * ");
		}
		printf("\n");
	}
	
}
