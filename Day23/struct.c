#include <stdio.h>

struct dates
{
	char day[2];
	char month[2];
	//char year[4];
	char* year;
	int year_size;

}date_day;// = { {'0','2'},{'0','3'},{'2','0','2','3'} };

int main()
{
	struct dates test;
	test = date_day;



}



