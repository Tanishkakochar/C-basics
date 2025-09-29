//Check if a matrix is symmetric.//
#include <stdio.h>
int main() {
    int matrix[3][3];
    int i, j;
    int isSymmetric = 1; 

    printf("Enter elements of a 3x3 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            if(matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0; 
                break;
            }
        }
        if(!isSymmetric) {
            break;
        }
    }
    if(isSymmetric) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }

    return 0;
}