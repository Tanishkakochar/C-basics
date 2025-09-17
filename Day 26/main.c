#include <stdio.h>

int main() {
    int rows = 5;

    for(int i = 0; i < rows; i++) {
        // Print spaces
        for(int j = 0; j < rows - i - 1; j++) {
            printf(" ");
        }
        // Print numbers
        for(int k = rows - i; k <= rows; k++) {
            printf("%d", k);
        }
        printf("\n");
    }

    return 0;
}
