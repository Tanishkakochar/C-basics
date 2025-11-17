//Print all enum names and integer values using a loop.//
#include <stdio.h>
int main () {
    enum Colors { RED, GREEN, BLUE, YELLOW, ORANGE };
    const char* colorNames[] = { "RED", "GREEN", "BLUE", "YELLOW", "ORANGE" };
    int numColors = sizeof(colorNames) / sizeof(colorNames[0]);

    for (int i = 0; i < numColors; i++) {
        printf("Color: %s, Value: %d\n", colorNames[i], i);
    }

    return 0;
}