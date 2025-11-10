//Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.//
#include <stdio.h>
int main ()
{
    FILE *fp;
    char name[50];
    int roll_number;
    float marks;
    int n, i;

    
    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    
    for (i = 0; i < n; i++) {
        printf("Enter name, roll number and marks of student %d: ", i + 1);
        scanf("%s %d %f", name, &roll_number, &marks);
        fprintf(fp, "%s %d %.2f\n", name, roll_number, marks);
    }

    fclose(fp);

    
    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    
    printf("\nStudent Records:\n");
    printf("Name\tRoll Number\tMarks\n");
    while (fscanf(fp, "%s %d %f", name, &roll_number, &marks) != EOF) {
        printf("%s\t%d\t\t%.2f\n", name, roll_number, marks);
    }

    fclose(fp);
    return 0;
}