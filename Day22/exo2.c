/*
Bilan 217 
Exo1

*/

#include <stdio.h>
int main()
{
	float x = 24;

	float* ptr = &x;
	float** ptr_ptr = && x// float** ptr_ptr =&ptr
	**ptr_ptr = 100;

	return 0;
}