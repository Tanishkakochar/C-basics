#include <stdio.h>

int main() {
    int n;
    long long fact = 1;
    scanf("%d", &n);

    if(n < 0) {
        printf("Factorial not defined\n");
        return 0;
    }

    for(int i = 1; i <= n; i++) {
        fact *= i;
    }

    printf("%lld\n", fact);
    return 0;
}
