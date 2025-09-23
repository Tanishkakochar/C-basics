//Merge two arrays.//
#include <stdio.h>
int main() {
    int a[100], b[100], c[200];
    int n, m, i, j, k;

    printf("Enter the number of elements in first array: ");
    scanf("%d", &n);
    printf("Enter the elements of first array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the number of elements in second array: ");
    scanf("%d", &m);
    printf("Enter the elements of second array: ");
    for (i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }

    for (i = 0; i < n; i++) {
        c[i] = a[i];
    }
    for (j = 0; j < m; j++) {
        c[n + j] = b[j];
    }

    printf("Merged array: ");
    for (k = 0; k < n + m; k++) {
        printf("%d ", c[k]);
    }
    
    return 0;
}
