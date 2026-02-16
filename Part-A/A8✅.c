#include <stdio.h>

void swap_bal(float *bal1, float *bal2) 
{
    float temp = *bal1;
    *bal1 = *bal2;
    *bal2 = temp;
}

int main()
{
    float bal1, bal2;

    printf("Enter balance for Account 1: ");
    scanf("%f", &bal1);

    printf("Enter balance for Account 2: ");
    scanf("%f", &bal2);

    printf("\nBalances before swapping:\n");
    printf("Account 1: %.2f\n", bal1);
    printf("Account 2: %.2f\n", bal2);

    swap_bal(&bal1, &bal2);

    printf("\nBalances after swapping:\n");
    printf("Account 1: %.2f\n", bal1);
    printf("Account 2: %.2f\n", bal2);

    return 0;
}