#include <stdio.h>
int main()
{
	/* Trying to 
    int i, j, k;
    for (i = 0, j = 0, k = 0; i < 4, k < 8, j < 10; i++)
    {
        printf("%d %d %d\n", i, j, k);
        j += 2;
        k += 3;
    }*/

    /*  Programme qui demande 5 entiers entre 1 et 10 avant de les montrer a la console. Oblige que les 5 entiers soit entre 1 et 10*/
    /*  Program that asks for 5 integers between 1 and 10 before showing them to the console. Requires the 5 integers to be between 1 and 10*/

    
    /* int value = 1;
    int counter = 5;
    while (counter>5 )
    {
        if (counter<=5 && value >= 1 && value <= 10)
        {
            printf("Enter 5 integers between 1 & 10: \n");
            scanf("%d", &value);
        }
    }*/

    int i[5];
    int guess = 0;

    for (int count = 0; count < 5; count++)
    {
        /*reinitialise guess */
        guess = 0;                        /* i[count]=0; */
        printf("enter");
        while ((guess <1) || (guess >10)) /* while( (i[count]<1) ||( i[count]>10)) */
        {
            scanf("%d", &guess);          /* scanf("%d", &i[count);*/
        }
        i[count] = guess;


    }
    for (int count = 0; count < 5; count++)
    {
        printf("%d\n", i[count]);
    }

    return 0;

}
