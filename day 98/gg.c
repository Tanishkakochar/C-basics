//Take two structs as input and check if they are identical.//
#include <stdio.h>
int main () {
    struct Point {
        int x;
        int y;
    };

    struct Point p1, p2;

    // Input for first struct
    printf("Enter coordinates for first point (x y): ");
    scanf("%d %d", &p1.x, &p1.y);

    // Input for second struct
    printf("Enter coordinates for second point (x y): ");
    scanf("%d %d", &p2.x, &p2.y);

    // Check if structs are identical
    if (p1.x == p2.x && p1.y == p2.y) {
        printf("The two points are identical.\n");
    } else {
        printf("The two points are not identical.\n");
    }

    return 0;
}