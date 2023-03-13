#include <stdio.h>

int main()
{
  int i =10;
  float f =10.10;
  int t1[] ={11,22,33,44};
  int t2[] ={33,44,55,66};
  int max = sizeof(t1)/sizeof(int);
  
  for(int i=0; i<max; i++)
  {
    for(int j=0; j<max; j++)
    {
    if (t2[j]==t1[i])
    {
        printf("%d\n", t1[i]);   
    }
    
    }
    
  }
   
  return 0;
}