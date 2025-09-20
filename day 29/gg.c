
#include <stdio.h>

int main(void) {
    int n;
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input\n");
        return 1;
    }

    long long sum = 0;
    for (int i = 0; i < n; ++i) {
        int val;
        printf("Element %d: ", i + 1);
        if (scanf("%d", &val) != 1) {
            printf("Invalid input\n");
            return 1;
        }
        sum += val;
    }

    printf("Sum = %lld\n", sum);
    return 0;
}
