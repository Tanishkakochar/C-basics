//Check if the elements on the diagonal of a matrix are distinct.//
#include <stdio.h>
int main()
 {
    int n, i, j, flag = 1;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);
    int matrix[n][n];
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                flag = 0;
                break;
            }
        }
        if (flag == 0) {
            break;
        }
    }
    if (flag) {
        printf("The diagonal elements are distinct.\n");
    } else {
        printf("The diagonal elements are not distinct.\n");
    }
    return 0;
}