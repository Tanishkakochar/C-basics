//Add two matrices.//
#include <stdio.h>
int main()
 {
    int a[3][3], b[3][3], sum[3][3];
    int i, j;

    // Input elements of first matrix
    printf("Enter elements of first 3x3 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // Input elements of second matrix
    printf("Enter elements of second 3x3 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    // Add the two matrices
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    // Display the result
    printf("Sum of the two matrices:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}