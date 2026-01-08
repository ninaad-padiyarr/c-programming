/*Input:marks
condition:-

1.marks>=90
  Grade A
2. 75-89
  Grade B
3.60-74
  Grade C
4.50-59
  Grade D
5.<50
  Grade F */
#include<stdio.h>
void main()
{
    int marks;

    //input hub.
    printf("Enter the marks of the student :");
    scanf("%d",&marks);
    
    //testing hub
    //if else ladder
    if(marks>=90)
    {
        printf("Grade A\n");
    }
    else if(marks>=75 && marks<=89)
    {
        printf("Grade B\n");
    }
    else if(marks>=60 && marks<=74)
    {
        printf("Grade C\n");
    }
    else if(marks>=50 && marks<=59)
    {
        printf("Grade D\n");
    }
    else
    {
        printf("Grade F\n");
    }
}

