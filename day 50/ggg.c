//Change the date format from dd/04/yyyy to dd-Apr-yyyy.//
#include <stdio.h>
int main() {
    int day, year;
    char month[4];
    
    printf("Enter date in dd/04/yyyy format: ");
    scanf("%d/%*d/%d", &day, &year);
    
    snprintf(month, sizeof(month), "Apr");
    
    printf("Date in dd-Apr-yyyy format: %02d-%s-%d\n", day, month, year);
    
    return 0;
}