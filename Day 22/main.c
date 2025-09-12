#include <stdio.h>

// Function to calculate factorial of a digit
int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n, temp, sum = 0;
    scanf("%d", &n);

    temp = n;
    while(temp > 0) {
        int digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }

    if(sum == n) {
        printf("Strong number\n");
    } else {
        printf("Not strong number\n");
    }

    return 0;
}
