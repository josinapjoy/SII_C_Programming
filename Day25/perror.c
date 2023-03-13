#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main() {
    FILE* fp;
    char filename[80];

    printf("Enter a file name: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL) {
        perror("Error opening file");
        printf("errno = %d\n", errno);
        
        if (errno == ENOENT) {
            perror("File not found\n");
        }
        else if (errno == EACCES) {
            perror("Permission denied\n");
        }
        else {
            perror("Unknown error\n");
        }
        
        exit(EXIT_FAILURE);
        //freopen("error.log", "w", stderr);
    }

    printf("File opened successfully\n");
    fclose(fp);

    return 0;
}
