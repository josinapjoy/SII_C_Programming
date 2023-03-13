#include <stdio.h>

#define COLS 3
#define ROWS 5

char data[COLS] = { 0,0,1 };                                         // {0,0,1}
char data2[COLS] = { 0,1,1 };
                                                                  //char data2D[2][COLS]= {{0,0,1},{0,1,1}};
char bus[COLS + 1] = { '*','*','*','\0' };                        // +1 because of the null operator
char* ptr_r1data2d = pattern1[1];                                // for debug
char* ptr_r2data2d = pattern2[2];                               //for debug

char pattern1[ROWS][COLS] = { {0,0,1},{0,1,1},{1,0,1},{0,0,1},{0,0,1} }; // 1
char pattern2[ROWS][COLS] = { {1,1,1},{1,0,1},{0,1,0},{1,0,0},{1,1,1} }; // 2

void displaydata2D();
void datatobus(char* data);

char* getaddressrowfromdata2D(int row);
char* getadresserowfrompatternadresse(int row, char* data2d);

int main()
{
	/*  puts(bus);  datatobus(data);

	puts(bus); datatobus(data2);

	puts(bus); puts(" ");

	puts(bus); datatobus(data2D[0]); puts(bus);

	datatobus(data2D[1]); puts(bus);

	puts(bus); puts(" ");

	datatobus(data3); puts(bus);        */

	//puts(bus); datatobus(getaddressrowfromdata2D(0));

	//puts(bus); datatobus(getaddressrowfromdata2D(1));


	displaydata2D(pattern1);
	puts("Nv display.");
	displayData2D(pattern2);
	return 0;
}

void displaydata2D()
{
	for (int i = 0; i < ROWS; i++)
	{
		datatobus(getaddressrowfromdata2D(i));
		puts(bus);
	}
	puts(" ");
}

void datatobus(char* data)
{
	for (int i = 0; i < COLS; i++)
	{
		// Ternary operator
		bus[i] = (!data[i] == 0) ? '*' : ' '; // 
	}
}

// Returns the address of the 
char* getaddressrowfromdata2D(int row)
{
	return &data2D[row];
}

char* getadresserowfrompatternadresse(int row, char* data2d)
{
	return &data2d(row * COLS)

}

void display(int entier)
{
	char* tmp;
}

char* choosepattern(int entier)
{
	if(entier==1)
	{
		return pattern1;
	}
}