#include <stdio.h>

int main()
{
  int i =10;
  float f =10.10;
  float nombres[] ={11.1,22.2,33.3,44.4};
  
  int max = sizeof(nombres)/sizeof(int);
  float s=0;
  
  for(int i=0; i<max; i++)
  {
    s+=nombres[i];
    
  }
   printf("Somme =%.2f",s);
  return 0;
}