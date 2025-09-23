//Find the digit that occurs the most times in an integer number.//
#include <stdio.h>
int main() {
    int number, digitCount[10] = {0};
    int i, maxCount = 0, mostFrequentDigit = -1;

    printf("Enter an integer number: ");
    scanf("%d", &number);


    while (number != 0) {
        int digit = number % 10;
        digitCount[digit]++;
        number /= 10;
    }

    
    for (i = 0; i < 10; i++) {
        if (digitCount[i] > maxCount) {
            maxCount = digitCount[i];
            mostFrequentDigit = i;
        }
    }

    printf("The digit that occurs the most is: %d (occurs %d times)\n", mostFrequentDigit, maxCount);
    
    return 0;
}