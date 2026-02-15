#include <stdio.h>

int main()
{
    char first[30], last[30], full[60];
    int i = 0, j = 0, length = 0;

    printf("Enter First Name: ");
    scanf("%s", first);

    printf("Enter Last Name: ");
    scanf("%s", last);

    // Copy first name
    while(first[i] != '\0')
    {
        full[i] = first[i];
        i++;
    }

    // Add space
    full[i] = ' ';
    i++;

    // Copy last name
    while(last[j] != '\0')
    {
        full[i] = last[j];
        i++;
        j++;
    }

    // End the string
    full[i] = '\0';

    // Find length
    while(full[length] != '\0')
    {
        length++;
    }

    printf("\nFull Name: %s", full);
    printf("\nLength: %d", length);

    if(length <= 20)
        printf("\nFits on screen");
    else
        printf("\nDoes not fit on screen");

    return 0;
}