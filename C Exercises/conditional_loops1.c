
#include <stdio.h>

int main()
{
    int i =1024; // [0100 0000 0000] 11 bits
    int count=0;
    //printf("Enter an integer: ");
    //scanf("%d",&i);
    
    for(;i;i>>=1)          // condition i if i is non zero value
    {
        printf("hello %d\n",i);
        count++;
    }
    printf("count >> %d",count);
    
    
    return 0;
}



/* 1024 [0100 0000 0000] >>1   512 [0010 0000 0000]
   512 [0010 0000 0000]  >>1   256 [0001 0000 0000]
   .....
   2 [0000 0000 0010]    >>1   1   [0000 0000 0001]
   1   [0000 0000 0001]  >>1   0  condition i becomes fales
   
   


*/