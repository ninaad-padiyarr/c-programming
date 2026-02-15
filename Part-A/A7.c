/*develope a c programee takes input for three subjects as input.use a function to ckeck if the student has passed minimum of 
40 marks in each subject display the average and weather the student has passed or failed use functions.*/
#include <stdio.h>

// Function to check pass or fail
int checkPass(int m1, int m2, int m3)
{
    if (m1 >= 40 && m2 >= 40 && m3 >= 40)
        return 1;   // Passed
    else
        return 0;   // Failed
}

// Function to calculate average
float calculateAverage(int m1, int m2, int m3)
{
    return (m1 + m2 + m3) / 3.0;
}

int main()
{
    int sub1, sub2, sub3;
    float avg;
    int result;

    printf("Enter marks for three subjects: ");
    scanf("%d %d %d", &sub1, &sub2, &sub3);

    avg = calculateAverage(sub1, sub2, sub3);
    result = checkPass(sub1, sub2, sub3);

    printf("Average Marks = %.2f\n", avg);

    if (result == 1)
        printf("Status: Passed\n");
    else
        printf("Status: Failed\n");

    return 0;
}