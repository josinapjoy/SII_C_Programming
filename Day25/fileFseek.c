#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 50

int main()
{
	FILE* fp1 = NULL;
	char ch;
	char str[SIZE];
	//char str1[SIZE];
	//fp1 = fopen("C:\\Users\\josina.palamoottil\\Desktop\\Day_25_Pgms\\abcd.txt", "r");
	fp1 = fopen("C:\\Users\\josina.palamoottil\\Desktop\\Day_25_Pgms\\abcd.txt", "r+");
	if (fp1 == NULL)
	{
		printf("Can't open file");
		exit(1);
	}
	gets(str);
	fseek(fp1, 7, SEEK_SET);
	fputs(str, fp1);
	fgets(str, SIZE, fp1);
	
	/*fseek(fp1, 7, SEEK_SET);
	ch = fgetc(fp1);
	printf("%c\n", ch);

	fseek(fp1, 2, SEEK_CUR);
	ch = fgetc(fp1);
	printf("%c\n", ch);

	fseek(fp1, -1, SEEK_END);
	ch = fgetc(fp1);
	printf("%c\n", ch);*/

	fclose(fp1);
	return 0;
}