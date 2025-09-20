
#include <stdio.h>
#include <limits.h>

int main(void) {
    int n;
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input\n");
        return 1;
    }

    int min = INT_MAX;
    int max = INT_MIN;
    for (int i = 0; i < n; ++i) {
        int val;
        printf("Element %d: ", i + 1);
        if (scanf("%d", &val) != 1) {
            printf("Invalid input\n");
            return 1;
        }
        if (val < min) min = val;
        if (val > max) max = val;
    }

    printf("Minimum = %d\nMaximum = %d\n", min, max);
    return 0;
}
