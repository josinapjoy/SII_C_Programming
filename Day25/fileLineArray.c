#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, m;
    FILE* fp = fopen("C:\\Users\\josina.palamoottil\\Desktop\\Day_25_Pgms\\abcd.txt", "r");

    if (!fp) {                           /* same as `file_in == NULL` */
        printf("Failed to open file\n");
        exit(1);
    }
        
    int lines = 0;                      /* number of lines */
    int c;                              /* return value of `fgetc` is of type `int` */

    /* go through each character in the file */
    while ((c = fgetc(fp)) != EOF) {
        /* increment the number of lines after every line break */
        if (c == '\n')
            ++lines;
    }

    /* reset pointer to start of file */
    rewind(fp);

    /* check the return value of `fscanf` */
    if (fscanf(fp, "%d\n", &n) != 1 ||
        fscanf(fp, "%d\n", &m) != 1) {
        printf("File contains invalid line\n");
        return EXIT_FAILURE;
    }
    printf("First two: %d %d\n", n, m);

    /* no need to cast `malloc`, because it returns `void *` */
    int* list = malloc(lines * sizeof(int));
    for (int i = 0; i < lines - 2; ++i) {
        /* check the return value of `fscanf` */
        if (fscanf(fp, "%d\n", &list[i]) != 1) {
            printf("File contains invalid line\n");
            return EXIT_FAILURE;
        }
        printf("%d\n", list[i]);
    }

    free(list); /* always free memory allocated by malloc */
    fclose(fp);
    return 0;
}