/*A sports teacher has recorded the scores in a 100 meter race to prepare the result 
sheet he teacher wants the scores arranges in descending order from highest to lowest
 develop a c programme to sort the scores*/
 
#include <stdio.h>

int main()
{
    int scores[50];   // Array declared first (maximum 50 students)
    int n, i, j, temp;

    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("Enter the scores:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &scores[i]);
    }

    // Sorting in descending order
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - 1 - i; j++)
        {
            if(scores[j] < scores[j + 1])
            {
                temp = scores[j];
                scores[j] = scores[j + 1];
                scores[j + 1] = temp;
            }
        }
    }

    printf("\nScores in Descending Order:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", scores[i]);
    }

    return 0;
}