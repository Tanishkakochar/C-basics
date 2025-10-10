//Print the initials of a name.//
#include <stdio.h>
int main()
 {
    char firstName[50], lastName[50];
    
    
    printf("Enter your first name: ");
    scanf("%49s", firstName);
    printf("Enter your last name: ");
    scanf("%49s", lastName);
    

    printf("Your initials are: %c.%c.\n", firstName[0], lastName[0]);
    
    return 0;
}