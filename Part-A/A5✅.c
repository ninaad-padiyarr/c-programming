#include <stdio.h>
#include <math.h>

#define PI 3.142

int main()
{
    int n, i;
    float deg, rad, sum, term;

    printf("Enter number of terms:\n");
    scanf("%d", &n);

    printf("Enter the degree:\n");
    scanf("%f", &deg);

    rad = (deg * PI) / 180;
    printf("In Radians = %f\n", rad);

    term = rad;
    sum = term;

    for(i = 1; i < n; i++)
    {
        term = (-term * rad * rad) / ((2*i) * (2*i + 1));
        sum = sum + term;
    }

    printf("sin(%f) = %f\n", deg, sum);
    printf("Inbuilt function sin(%f) = %f\n", deg, sin(rad));

    return 0;
}