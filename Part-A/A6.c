/*develope a c programme that accepts a cource description string and a
 keyword from the user.search weather the keyword exists within the 
 course description using appropriate string fuinction.if founddisplay 
 "keywoprd '<keyword>' found in the course description" otherwise display 
 "keyword '<keyword>' not found in the course descritpion"*/

#include <stdio.h>
#include <string.h>

int main()
{
    char cource[100];
    char key[50];

    printf("Enter the cource description: ");
    fgets(cource, sizeof(cource), stdin);

    printf("Enter the keyword to be searched: ");
    fgets(key, sizeof(key), stdin);

    // Remove newline character
    cource[strcspn(cource, "\n")] = 0;
    key[strcspn(key, "\n")] = 0;

    if (strstr(cource, key) != NULL)
    {
        printf("Keyword '%s' found in the cource description\n", key);
    }
    else
    {
        printf("Keyword '%s' not found in the cource description\n", key);
    }

    return 0;
}