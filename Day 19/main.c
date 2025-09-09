#include <stdio.h>

int main() {
    int a, b, temp, x, y;
    scanf("%d %d", &a, &b);

    x = a;
    y = b;

    while(b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    int hcf = a;
    int lcm = (x * y) / hcf;

    printf("%d\n", lcm);
    return 0;
}
