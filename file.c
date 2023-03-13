#include "io.h"


void print_result(long result)
{
	//int result;
	FILE* f = fopen("output.txt", "w");
	if (!f) return;
	fprintf(f, "result %ld", result);
	fclose(f);
}
