//Print initials of a name with the surname displayed in full.//
#include <stdio.h>
int main()
 {
    char firstName[50], lastName[50];
    
    
    printf("Enter your first name: ");
    scanf("%49s", firstName);
    printf("Enter your last name: ");
    scanf("%49s", lastName);
    

    printf("Your name is: %c. %s\n", firstName[0], lastName);
    
    return 0;
}