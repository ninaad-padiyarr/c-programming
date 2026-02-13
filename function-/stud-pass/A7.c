/*develope a c programee takes input for three subjects as input.use a function to ckeck if the student has passed minimum of 
40 marks in each subject display the average and weather the student has passed or failed.*/
#include <stdio.h>

int main() {
    int subject1, subject2, subject3;
    float average;

    printf("Enter marks for three subjects: ");
    scanf("%d %d %d", &subject1, &subject2, &subject3);

    average = (subject1 + subject2 + subject3) / 3.0;

    if (subject1 >= 40 && subject2 >= 40 && subject3 >= 40) {
        printf("Average: %.2f\n", average);
        printf("Student has passed.\n");
    } else {
        printf("Average: %.2f\n", average);
        printf("Student has failed.\n");
    }

    return 0;
}
    } else {
        printf("Average: %.2f\n", average);
        printf("Student has failed.\n");
    }

    return 0;
}