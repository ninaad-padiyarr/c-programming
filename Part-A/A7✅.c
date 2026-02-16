#include <stdio.h>

int pass(int m1, int m2, int m3)
{
    if (m1 >= 40 && m2 >= 40 && m3 >= 40)
        return 1;   // Passed
    else
        return 0;   // Failed
}

float average(int m1, int m2, int m3)
{
    return (m1 + m2 + m3) / 3.0;
}

int main()
{
    int m1, m2, m3;
    float avg;
    int result;

    printf("Enter marks for three subjects: ");
    scanf("%d %d %d", &m1, &m2, &m3);

    avg = average(m1, m2, m3);
    result = pass(m1, m2, m3);

    printf("Average Marks = %.2f\n", avg);

    if (result == 1)
        printf("Status: Passed\n");
    else
        printf("Status: Failed\n");

    return 0;
}