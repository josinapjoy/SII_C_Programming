#include <stdio.h>

int main()
{
  int i =10;
  float f =10.10;
  int nombres[] ={11,22,33,44};
  
  int max = sizeof(nombres)/sizeof(int);
  
  for(int i=max-1; i>=0; i--)
  {
    printf("%d\n", nombres[i]);  
  }
   
  return 0;
}
