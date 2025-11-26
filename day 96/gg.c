//Create Employee structure with nested Date structure for joining date and print details.//
#include <stdio.h>
int main ()
{
    struct Date {
        int day;
        int month;
        int year;
    };

    struct Employee {
        char name[50];
        int id;
        struct Date joiningDate;
    };

    struct Employee emp;

    printf("Enter Employee Name: ");
    fgets(emp.name, sizeof(emp.name), stdin);
    
    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);
    
    printf("Enter Joining Date (DD MM YYYY): ");
    scanf("%d %d %d", &emp.joiningDate.day, &emp.joiningDate.month, &emp.joiningDate.year);

    
    printf("\nEmployee Details:\n");
    printf("Name: %s", emp.name);
    printf("ID: %d\n", emp.id);
    printf("Joining Date: %02d/%02d/%04d\n", emp.joiningDate.day, emp.joiningDate.month, emp.joiningDate.year);

    return 0;
}