//Store employee data in a binary file using fwrite() and read using fread().//
#include <stdio.h>
#include <stdlib.h> 
int main () 
{ 
    FILE *fp; 
    struct emp 
    { 
        int id; 
        char name[20]; 
        float salary; 
    } e1, e2; 

  
    fp = fopen("employee.dat", "wb"); 
    if (fp == NULL) 
    { 
        printf("Error opening file for writing.\n"); 
        return 1; 
    } 

    printf("Enter Employee ID: "); 
    scanf("%d", &e1.id); 
    printf("Enter Employee Name: "); 
    scanf("%s", e1.name); 
    printf("Enter Employee Salary: "); 
    scanf("%f", &e1.salary); 

    fwrite(&e1, sizeof(e1), 1, fp); 
    fclose(fp); 

   
    fp = fopen("employee.dat", "rb"); 
    if (fp == NULL) 
    { 
        printf("Error opening file for reading.\n"); 
        return 1; 
    } 

    fread(&e2, sizeof(e2), 1, fp); 
    fclose(fp); 

    printf("\nEmployee Details:\n"); 
    printf("ID: %d\n", e2.id); 
    printf("Name: %s\n", e2.name); 
    printf("Salary: %.2f\n", e2.salary); 

    return 0; 
}