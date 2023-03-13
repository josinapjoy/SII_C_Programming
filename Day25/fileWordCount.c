// program to number of lines in a file
// enter the path of file also

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* fp;
    char ch; // or int ch; technically functions like fgetc returns int  
    int charCount = 0;
    int wordCount = 1;
    fp = fopen("C:\\Users\\josina.palamoottil\\Desktop\\Day_25_Pgms\\abcd.txt", "r");
    if (fp == NULL)
    {
        printf("Could not open file");
        exit(1);
    }
    while ((ch = fgetc(fp)) != EOF)
    {
        charCount++;
        if ((ch ==' ') || (ch =='\n')||(ch=='\''))
        {
            wordCount++;
        }
    }
    fclose(fp);
    printf("The file has %d words\n", wordCount);
    printf("The file has %d characters\n", charCount);
  
    return 0;
}