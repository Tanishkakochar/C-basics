//Rotate an array to the right by k positions.//
#include <stdio.h>
int main() {
    int n, k, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number of positions to rotate the array: ");
    scanf("%d", &k);
    k = k % n;


    int temp[k];
    for(i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }
    for(i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }
    for(i = 0; i < k; i++) {
        arr[i] = temp[i];
    }

    printf("The rotated array is:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}