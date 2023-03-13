#include <stdio.h>


float cube(float a);

int main()
{
	float cote = 0;
	printf("Rentrer cote carre: ");
	scanf("%f",&cote);
    float volume;
	volume = cube(cote);
    printf("Volume %f :\n ", volume);
	return 0;
}

float cube(float a)
{
	return a*a*a;
}
