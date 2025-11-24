//Return a structure containing top student's details from a function.//
#include <stdio.h>
int main ()
{
    struct student
    {
        char name[50];
        int roll;
        float marks;
    };

    struct student top_student()
    {
        struct student s1;
        printf("Enter name of the student: ");
        scanf("%s", s1.name);
        printf("Enter roll number of the student: ");
        scanf("%d", &s1.roll);
        printf("Enter marks of the student: ");
        scanf("%f", &s1.marks);
        return s1;
    }

    struct student top = top_student();
    printf("\nTop Student Details:\n");
    printf("Name: %s\n", top.name);
    printf("Roll Number: %d\n", top.roll);
    printf("Marks: %.2f\n", top.marks);

    return 0;
}