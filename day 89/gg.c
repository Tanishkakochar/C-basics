//Show that enums store integers by printing assigned values.//
#include <stdio.h>
int main () {
    enum colors { RED = 1, GREEN = 2, BLUE = 3 };
    enum colors myColor;

    myColor = GREEN;
    printf("The value of GREEN is: %d\n", myColor);

    myColor = RED;
    printf("The value of RED is: %d\n", myColor);

    myColor = BLUE;
    printf("The value of BLUE is: %d\n", myColor);

    return 0;
}