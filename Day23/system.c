#include <stdio.h>
#include <stdlib.h>

int main()
{
	char commande[] = "dir";
	//char commande[] = "ls -l";  ->>> linux command
	system(commande);

	return 0;
}