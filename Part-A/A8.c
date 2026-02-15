/*in an atm system,two account balances need to be swapped temprerorily 
for validation.develope a c programme that accepts two balances 
and uses a function with arguments and return value with pointers 
to swap them.display the balances before and after swapping*/
#include <stdio.h>

// Function to swap two balances using pointers
void swap_balances(float *balance1, float *balance2) {
    float temp = *balance1;
    *balance1 = *balance2;
    *balance2 = temp;
}
void main() {
    float balanceA, balanceB;

    // Input two account balances
    printf("Enter balance for Account A: ");
    scanf("%f", &balanceA);
    printf("Enter balance for Account B: ");
    scanf("%f", &balanceB);

    // Display balances before swapping
    printf("\nBalances before swapping:\n");
    printf("Account A: %.2f\n", balanceA);
    printf("Account B: %.2f\n", balanceB);

    // Swap the balances
    swap_balances(&balanceA, &balanceB);

    // Display balances after swapping
    printf("\nBalances after swapping:\n");
    printf("Account A: %.2f\n", balanceA);
    printf("Account B: %.2f\n", balanceB);
}
