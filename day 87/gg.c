//Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.//
#include <stdio.h>
int main () {
    
    enum UserRole { ADMIN, USER, GUEST };
    
    
    enum UserRole role = USER;
    
    
    switch (role) {
        case ADMIN:
            printf("Welcome, Admin! You have full access.\n");
            break;
        case USER:
            printf("Welcome, User! You have limited access.\n");
            break;
        case GUEST:
            printf("Welcome, Guest! You have minimal access.\n");
            break;
        default:
            printf("Unknown role.\n");
            break;
    }
    
    return 0;
}