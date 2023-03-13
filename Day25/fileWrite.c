#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 30
int main()
{
	FILE* fp = NULL;
	FILE* fp1 = NULL;
	int i, a = 10;
	char ch = 'a';
	char str1[SIZE];
	char str2[20] = "Jerry John";

	fp = fopen("C:\\Users\\josina.palamoottil\\Desktop\\Day_25_Pgms\\abc.txt", "w");
	if (fp == NULL)
	{
		printf("Error");
		exit(1);
	}
	fp1= fopen("C:\\Users\\josina.palamoottil\\Desktop\\Day_25_Pgms\\ab.txt", "w");
	if (fp1==NULL)
	{
		printf("Error");
		exit(1);
	}

	printf("Enter the string:\n");
	gets(str1);   //for user input
	fputs(str1, fp);   // directly takes string input
	//for (i = 0; i!=strlen(str1); i++)fputc(str1[i], fp);  //takes input as a loop
	fputs(str2, fp);
	fputc(ch, fp);

	fprintf(fp1, "%d\n%s\n%s\n%c", a, str1, str2, ch);

	fclose(fp); 
	fclose(fp1);
	return 0;
}