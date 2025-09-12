#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        double numerator = 2 * i - 1;
        double denominator = 2 * i;
        sum += numerator / denominator;
    }

    printf("Approximate sum: %.1lf\n", sum);
    return 0;
}
