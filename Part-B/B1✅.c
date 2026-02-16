#include <stdio.h>

int main()
{
    int numbers, id, search;
    int book[100];
    int low, high, mid;
    int found = 0;

    printf("Enter number of books: ");
    scanf("%d", &numbers);

    printf("Enter Book IDs:\n");
    for(id = 0; id < numbers; id++)
    {
        scanf("%d", &book[id]);
    }

    // Check if ascending order
    for(id = 0; id < numbers - 1; id++)
    {
        if(book[id] > book[id + 1])
        {
            printf("Book IDs are NOT in ascending order.\n");
            return 0;
        }
    }

    printf("Enter Book ID to search: ");
    scanf("%d", &search);

    low = 0;
    high = numbers - 1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(book[mid] == search)
        {
            found = 1;
            break;
        }
        else if(book[mid] < search)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if(found == 1)
        printf("Book ID %d is available at shelf number %d.\n", search, mid + 1);
    else
        printf("Book ID %d is NOT available.\n", search);

    return 0;
}