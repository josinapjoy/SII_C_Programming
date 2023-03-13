#include <stdio.h>
int main()
{


/* Demande 10 nombres pour les stocker dans un tableau. Arrete l'obtention si un nombre vaut 51 */
/* Request 10 numbers to store them in an array. Stops getting them if a number is 51 */

    int i[5];
    int guess = 0;

    for (int count = 0; count < 5; count++)
    {
       
        guess = 0;                        /* i[count]=0; */
        printf("enter");
        while ((guess < 1) || (guess > 10)) /* while( (i[count]<1) ||( i[count]>10)) */
        {
            scanf("%d", &guess);          /* scanf("%d", &i[count);*/
        }
        i[count] = guess;





return 0;
}