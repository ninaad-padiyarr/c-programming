//same code using conditional operator using characters

#include <stdio.h>
void main()
{
    char grade;
    int marks;

    //input hub.
    printf("Enter the marks of the student :");
    scanf("%d", &marks);

    //testing hub
    grade = (marks >= 90) ? 'A' :
            (marks >= 75) ? 'B' :
            (marks >= 60) ? 'C' :
            (marks >= 50) ? 'D' : 'F';
            
            //output hub.
    printf("Grade %c\n", grade);
}
