#include <stdio.h>

int main()
{
    int pan[3] = {1234, 5678, 9101};
    int aadhaar[3] = {1111, 2222, 3333};
    int driving[3] = {4444, 5555, 6666};
    int passport[3] = {7777, 8888, 9999};

    int choice, id;
    int found = 0;

    printf("------ KYC VERIFICATION ------\n");
    printf("1. PAN\n");
    printf("2. Aadhaar\n");
    printf("3. Driving Licence\n");
    printf("4. Passport\n");
    
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter document number: ");
    scanf("%d", &id);

    switch(choice)
    {
        case 1:
            for(int i = 0; i < 3; i++)
            {
                if(pan[i] == id)
                {
                    found = 1;
                }
            }
            break;

        case 2:
            for(int i = 0; i < 3; i++)
            {
                if(aadhaar[i] == id)
                {
                    found = 1;
                }
            }
            break;

        case 3:
            for(int i = 0; i < 3; i++)
            {
                if(driving[i] == id)
                {
                    found = 1;
                }
            }
            break;

        case 4:
            for(int i = 0; i < 3; i++)
            {
                if(passport[i] == id)
                {
                    found = 1;
                }
            }
            break;

        default:
            printf("Invalid choice\n");
            return 0;
    }

    if(found == 1)
        printf("Individual is VERIFIED\n");
    else
        printf("Individual is NOT VERIFIED\n");

    return 0;
}