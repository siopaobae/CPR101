// FUNDAMENTALS SOURCE
#define _CRT_SECURE_NO_WARINGS
#define BUFFER_SIZE		80 
#define NUM_INPUT_SIZE  10
#include "fundamentals.h"

// V1
void fundamentals(void) {
	printf("*** Start of Indexing Strings Demo ***\n");
	// Declare variables
	char    buffer1[BUFFER_SIZE];
	char    numInput[NUM_INPUT_SIZE];
	size_t  position;
	do {
		printf("Type not empty string (q - to quit):\n");
		fgets(buffer1, BUFFER_SIZE, stdin);
		buffer1[strlen(buffer1) - 1] = '\0';
		
		if (strcmp(buffer1, "q") != 0) { //checking if it is the exit command
			printf("Type the character position within the string:\n");
			fgets(numInput, NUM_INPUT_SIZE, stdin);
			numInput[strlen(numInput) - 1] = '\0';
			position = atoi(numInput);
			// Check if the position is within the string's length
			if (position >= strlen(buffer1)) {
				position = strlen(buffer1) - 1;
				printf("Too big... Position reduced to max. availbale\n");
			}
			// display the character at the specified position

			printf("The character found at %d position is \'%c\'\n", 
							(int)position, buffer1[position]);
		}
				
	} while (strcmp(buffer1, "q") != 0);
	printf("*** End of Indexing strings to int Demo ***\n\n");
}