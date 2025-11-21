//Store details of 5 students in an array of structures and print all.//
#include <stdio.h>
int main ()
{
    struct student
    {
        char name[50];
        int roll;
        float marks;
    } s[5];

    // Input details of 5 students
    for(int i = 0; i < 5; i++)
    {
        printf("Enter details of student %d\n", i + 1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Roll Number: ");
        scanf("%d", &s[i].roll);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Print details of 5 students
    printf("\nDetails of students:\n");
    for(int i = 0; i < 5; i++)
    {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("Roll Number: %d\n", s[i].roll);
        printf("Marks: %.2f\n", s[i].marks);
    }

    return 0;
}