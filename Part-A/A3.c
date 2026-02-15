/* C programme that takes a unique identification input like pan aadhaar 
aapar driving licence passport And cheques it against a stored KYC Records based on the input display 
whether the individual is verified or not use an appropriate control structure to handle multiple possible 
id matches assume all unique identification numbers are of integer type make this programme use array to 
store 3 records of each document and use for loops in switch statements use only integers 
for all document numbers and design a propper menue for which type of ducument to verify*/

#include <stdio.h>
void main()
{
    int pan[3] = {123456789, 987654321, 456789123};
    int aadhaar[3] = {111122223333, 444455556666, 777788889999};
    int driving_license[3] = {098, 876, 654};
    int passport[3] = {432,4564,34535};
    
    int choice, id, found = 0;

    // Menu display
    printf("Select the document type to verify:\n");
    printf("1. PAN\n");
    printf("2. Aadhaar\n");
    printf("3. Driving Licence\n");
    printf("4. Passport\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    // Input unique identification number
    printf("Enter the unique identification number: ");
    scanf("%d", &id);

    // Verification process
    switch(choice)
    {
        case 1:
            for(int i = 0; i < 3; i++)
            {
                if(pan[i] == id)
                {
                    found = 1;
                    break;
                }
            }
            break;
        case 2:
            for(int i = 0; i < 3; i++)
            {
                if(aadhaar[i] == id)
                {
                    found = 1;
                    break;
                }
            }
            break;
        case 3:
            for(int i = 0; i < 3; i++)
            {
                if(driving_license[i] == id)
                {
                    found = 1;
                    break;
                }
            }
            break;
        case 4:
            for(int i = 0; i < 3; i++)
            {
                if(passport[i] == id)
                {
                    found = 1;
                    break;
                }
            }
            break;
        default:
            printf("Invalid choice!\n");
            return;
    }

    // Output result
    if(found)
        printf("The individual is verified.\n");
    else
        printf("The individual is not verified.\n");
}

