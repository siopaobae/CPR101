#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#include "converting.h"


void converting(void) 
{
	//V1: Convert string to integer

	printf("*** start of Converting Strings to int Demo ***\n");
	char	intString[BUFFER_SIZE];
	int		intNumber;
	do {
		printf("Type an int numeric string (q - to quit):\n");
		fgets(intString, BUFFER_SIZE, stdin);
		intString[strlen(intString) - 1] = '\0';// Remove newline character
		if (strcmp(intString, "q") != 0) {
			intNumber = atoi(intString);// Convert string to integer
			printf("Converted number is %d\n", intNumber);
		}
	} while (strcmp(intString, "q") != 0);
	printf("*** End of Converting Strings to int Demo ***\n\n");
}

	