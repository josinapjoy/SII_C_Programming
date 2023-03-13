
#include <stdio.h>

int main()
{
  int i =10;
  float f =10.10;
  int nombres[] ={11,22,33,44};
  printf("%d\n", i);
  printf("%.2f\n", f);
  printf("%d\n", nombres[0]);
  printf("%d\n", nombres[2]);
  nombres[2]=12;
  printf("%d\n", nombres[2]);
  printf("%d\n",sizeof(i));
  printf("%d\n",sizeof(f));
  printf("%d\n",sizeof(nombres));
    return 0;
}
