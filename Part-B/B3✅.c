#include <stdio.h>

int main()
{
    int quantity;
    float price, total = 0,discount;
    char choice;

    do
    {
        printf("Enter quantity: ");
        scanf("%d", &quantity);

        printf("Enter price per unit: ");
        scanf("%f", &price);

        total = total + (quantity * price);

        printf("Do you want to add another item? (y/n): ");
        scanf(" %c", &choice);   // space before %c is important

    } while(choice == 'y' || choice == 'Y');

    printf("\nTotal Bill = %.2f\n", total);

    if(total > 2000)
    {
          discount = total * 0.10;
        total = total - discount;
        printf("10%% Discount Applied!\n");
        printf("Final Bill after Discount = %.2f\n", total);
    }

    return 0;
}