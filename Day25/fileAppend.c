#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 50

int main()
{
	FILE* fp1 = NULL;
	char ch;
	char str[SIZE];
	fp1 = fopen("C:\\Users\\josina.palamoottil\\Desktop\\Day_25_Pgms\\ab.txt", "a");
	if (fp1 == NULL)
	{
		printf("Error");
		exit(1);
	}
	printf("Enter the string");
	gets(str);
	fprintf(fp1, "\n%s", str);
	//fputs(str, fp1); demerit : appended in the same line

	return 0;
}