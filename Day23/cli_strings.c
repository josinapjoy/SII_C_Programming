#include <stdio.h>
#include <stdlib.h>

int main()
{
	char commande[1000];
	char string_input[1000];
	char dir_string[] = "dir";
	char exit_string[10] = "exit";

	printf("$");
	printf("Enter string of characters : ");
	scanf("%s", &string_input);
	while (1)
	{
		if (strstr(string_input, "exit"))
		{
			exit(1); //or break;
		}
		else if (strstr(string_input, "dir"))
		{
			system(string_input);
			break;
		}
		else {
			printf("Enter string is as follows : %s", string_input);
		}
	}
	
	return 0;
}