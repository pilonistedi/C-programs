//students grading system
#include<stdio.h>

int main(){
    int subject_1,subject_2,subject_3,average;
    char grade;

    printf("Enter marks for subject 1: ");
    scanf("%d", &subject_1);
    printf("Enter marks for subject 2: ");
    scanf("%d", &subject_2);
    printf("Enter marks for subject 3: ");
    scanf("%d", &subject_3);

    average = (subject_1 + subject_2 + subject_3) / 3;

    if (average >= 70 && average <= 100){
        grade = 'A';
    } else if (average >= 60){
        grade = 'B';
    } else if (average >= 50){
        grade = 'C';
    } else if (average >= 40){
        grade = 'D';
    } else{
        printf("Invalid marks entered please try again!");
    }

    printf("\nYou attained an average of %d with a grade of %c .", average,grade);

    return 0;
}
