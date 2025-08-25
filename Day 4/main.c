#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    x = x + y;
    y = x - y;
    x = x - y;
    printf("After swap: %d %d\n", x, y);
    return 0;
}
