#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, d, root1, root2;

    scanf("%lf %lf %lf", &a, &b, &c);

    d = b * b - 4 * a * c;

    if(d > 0) {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots are real and different: %.0lf, %.0lf\n", root1, root2);
    } else if(d == 0) {
        root1 = -b / (2 * a);
        printf("Roots are real and same: %.0lf\n", root1);
    } else {
        printf("Roots are complex\n");
    }

    return 0;
}
