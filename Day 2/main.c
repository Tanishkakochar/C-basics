#include <stdio.h>

int main() {
    int length, breadth;

    // Taking rectangle dimensions
    scanf("%d %d", &length, &breadth);

    // Calculations
    int area = length * breadth;
    int perimeter = 2 * (length + breadth);

    // Display results
    printf("Area=%d, Perimeter=%d\n", area, perimeter);

    return 0;
}