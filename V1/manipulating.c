
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#include "manipulating.h"
// Function to demonstrate string concatenation
void manipulating(void) {
    // Prints message to indicate start of function
    printf("*** Start of Concatenating Strings Demo ***\n");
    // Declaring character array or size of strings
    char string1[BUFFER_SIZE];
    char string2[BUFFER_SIZE];
    // Loop that asks user for inputs and concanate strings
    do {
        // Prompt the user for first string
        printf("Type the first string (q - to quit):\n");
        fgets(string1, BUFFER_SIZE, stdin);
        string1[strlen(string1) - 1] = '\0';
        // Check if user typed "q" to quit
        if ((strcmp (string1, "q") !=0)) {
            // Prompt for string2 if not quit
            printf("type the 2nd string:\n");
            fgets(string2, BUFFER_SIZE, stdin);
            string2[strlen(string2) - 1] = '\0';
            // Concanates the two strings
            strcat(string1, string2);
            // Prints the resulted string
            printf("Concatenated string is \'%s\'\n", string1);
        }
    } while (strcmp(string1, "q") != 0);// Repeats Loop until user quits (inputs "q")
    printf("***End of Concatenating Strings Demo ***\n\n");// Closure for Concatenation function
}