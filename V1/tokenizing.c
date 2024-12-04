#define _CRT_SECURE_NO_WARNINGS 
#define BUFFER_SIZE 300 
#include "tokenizing.h" 

void tokenizing(void) { // start the Tokenizing

    printf("*** Start of Tokenizing Words Demo ***\n");  //Prints a message indicating the start of the tokenizing

    char words[BUFFER_SIZE]; //Sets the array size of words variable acord with buzzer size that is equal to 300

    char* nextWord = NULL; //NextWord sends its input to null

    int wordsCounter; //Declaration of the variable wordsCounter


    do {

        printf("Type a few words separated by space (q - to quit):\n");   //Prints a message asking for an input

            fgets(words, BUFFER_SIZE, stdin);  // Read input from the user


        words[strlen(words) - 1] = '\0';


        if (strcmp(words, "q") != 0) {  // Checks if the user input is not "q"

            nextWord = strtok(words, " ");


            wordsCounter = 1;

            while (nextWord) {

                printf("Word #%d is '%s'\n", wordsCounter++, nextWord);  // it says to the user how much words are written
                nextWord = strtok(NULL, " "); // Gets the next word
            }
        }

    } while (strcmp(words, "q") != 0); //Sets a condition to make the loop working, that means until the input be "q"


    printf("*** End of Tokenizing Words Demo ***\n");  //the end of the tokenizing module.
}