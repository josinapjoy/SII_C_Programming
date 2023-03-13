#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 50

int main()
{
	FILE* fp1 = NULL;
	char ch;
	char str[SIZE];
	char str1[SIZE];
	fp1 = fopen("C:\\Users\\josina.palamoottil\\Desktop\\Day_25_Pgms\\abcd.txt", "a+");
	if (fp1 == NULL)
	{
		printf("Can't open file"); 
		exit(1);
	}
	printf("Enter the string");
	gets(str);
	fputs(str, fp1);
	rewind(fp1);
	while (!feof(fp1))
	{
		fgets(str1, 15, fp1);
		printf("%s", str1);
	}

	fclose(fp1);
	return 0;
}