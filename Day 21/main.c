#include <stdio.h>
#include <math.h>

int main() {
    int n, first, last, digits, power, swapped;
    scanf("%d", &n);

    last = n % 10;

    digits = (int)log10(n);
    first = n / (int)pow(10, digits);

    if(digits == 0) {
        printf("%d\n", n);
        return 0;
    }

    power = (int)pow(10, digits);

    swapped = last * power + (n % power) - last + first;

    printf("%d\n", swapped);
    return 0;
}
