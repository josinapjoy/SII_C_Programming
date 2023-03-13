#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 50

int main()
{
	FILE* fp1 = NULL;
	char ch;
	char str[SIZE];
	// Prerequis pour ouvrer un fichier,d'abord le fichier dois être exist la
	fp1 = fopen("C:\\Users\\josina.palamoottil\\Desktop\\Day_25_Pgms\\ab.txt", "r");
	if (fp1 == NULL)
	{
		printf("Error");
		exit(1);
	}
	/*To read all contents of the file
	* Method 1
	while (!feof(fp1))
	{
		ch = fgetc(fp1);
		printf("%c", ch);
	}
	*/

	//Method 2
	/*while (!feof(fp1))
	{
		fgets(str, SIZE, fp1);
		printf("%s", str);
	}*/
	while (!feof(fp1))
	{
		fgets(str, 15, fp1);
		printf("%s", str);
	}
	fclose(fp1);
	return 0;
}