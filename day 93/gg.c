//Find and print the student with the highest marks.//
#include <stdio.h>
int main ()
{
    int n, i;
    char name[50];
    int marks, highest_marks = -1;
    char top_student[50];

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", name);
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &marks);

        if(marks > highest_marks) {
            highest_marks = marks;
            strcpy(top_student, name);
        }
    }

    printf("The student with the highest marks is %s with %d marks.\n", top_student, highest_marks);

    return 0;
}