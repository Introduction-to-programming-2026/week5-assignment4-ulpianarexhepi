// Homework – Memory Logger
// Name: Ulpiana R
// Date: 15.03.26
//
// Read the README.md in this folder before starting!

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_WORDS 5

int main(void)
{
    // TODO: Declare an array of NUM_WORDS char* pointers
    /* ??? */

    // -------------------------------------------------------
    // STEP 1 & 2: Read words and store copies in memory
    // -------------------------------------------------------
    for (int i = 0; i < NUM_WORDS; i++)
    {
        char *input = get_string("Enter word %i: ", i + 1);

        // TODO: Allocate memory for a copy of input (+1 for '\0')
        words[i] = malloc(/* ??? */);

        // TODO: Check if malloc returned NULL
        if (/* ??? */)
        {
            printf("Memory error!\n");
            return 1;
        }

        // TODO: Copy input into words[i]
        strcpy(/* ??? */, /* ??? */);

        // TODO: Capitalize the first letter of words[i]
        if (strlen(words[i]) > 0)
        {
            words[i][0] = toupper(/* ??? */);
        }
    }

    // -------------------------------------------------------
    // STEP 3: Save all words to log.txt
    // -------------------------------------------------------

    // TODO: Open "log.txt" in write mode "w"
    FILE *file = fopen(/* ??? */, /* ??? */);

    // TODO: Check if fopen returned NULL
    if (/* ??? */)
    {
        printf("Could not open file!\n");
        return 1;
    }

    // TODO: Write each word to the file followed by "\n"
    for (int i = 0; i < NUM_WORDS; i++)
    {
        fprintf(file, /* ??? */, words[i]);
    }

    // TODO: Close the file
    /* ??? */

    printf("\nWords saved to log.txt!\n");

    // -------------------------------------------------------
    // STEP 4: Free all allocated memory
    // -------------------------------------------------------

    // TODO: Free each word
    for (int i = 0; i < NUM_WORDS; i++)
    {
        free(/* ??? */);
    }

    return 0;
}
