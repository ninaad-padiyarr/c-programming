/*a sensor in a robotic arm needs to calculate the angle of rotation in real time 
but the hardware doesnt support built in trignometric functions develop a 
c programme to approximate the value of sin x using a series expamsion methoos 
for improved performancees*/
#include <stdio.h>

int main()
{
    float x, term, sum;
    int n, i;

    printf("Enter angle in radians: ");
    scanf("%f", &x);

    printf("Enter number of terms: ");
    scanf("%d", &n);

    sum = 0;
    term = x;   // first term is x

    for(i = 1; i <= n; i++)
    {
        sum = sum + term;

        // calculate next term
        term = -term * x * x / ((2*i) * (2*i + 1));
    }

    printf("Approximate value of sin(x) = %f", sum);

    return 0;
}
