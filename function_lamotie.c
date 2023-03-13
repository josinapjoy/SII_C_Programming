#include <stdio.h>

float lamoitie(float a);

int main()
{
	float a = 5;
	int x = 5;
	float b = lamoitie(a);
	printf("%f", b);
	return 0;

}
float lamoitie(float a)
{
	int x = 8;
	a = a / 2;
	return a ;
}