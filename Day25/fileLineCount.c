// program to number of lines in a file
// enter the path of file also
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_FILE_NAME 100

int main()
{
    FILE* fp;
    char ch;                                        
    //int count = 0;   
    int charCount = 0;
    int lineCount = 1;
    fp = fopen("C:\\Users\\josina.palamoottil\\Desktop\\Day_25_Pgms\\abcd.txt", "r");
    if (fp == NULL)
    {
        printf("Could not open file");
        exit(1);
    }
    //ch= getc(fp)
    //while(ch!=EOF)
    while ((ch = fgetc(fp)) != EOF)
    //for(ch=fgetc(fp);ch!=EOF;ch=fgetc(fp))
    {
        if (ch == '\n')
        {
            lineCount++;
        }
        //ch = getc(fp);
        else
        {
            charCount++;
        }
    }
    fclose(fp);                         
    printf("The file has %d characters\n", charCount);
    printf("The file has %d lines\n", lineCount);
    return 0;
}