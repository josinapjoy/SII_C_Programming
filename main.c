#include <stdlib.h>
#include <stdio.h>
#include "calc.h"
#include "io.h"

int main()
{
	int x;
	printf("Enter an integer : ");
	scanf("%d", &x);
	print_result(sqr(x));
	//printf("\n The carre de %d est %ld \n", x, sqr(x));
	return 0;
}