#include <stdio.h>

int main() {
    int n;
    long long product = 1;
    scanf("%d", &n);

    if(n < 2) {
        printf("No even numbers\n");
        return 0;
    }

    for(int i = 2; i <= n; i += 2) {
        product *= i;
    }

    printf("%lld\n", product);
    return 0;
}
