//Insert an element in a sorted array at the appropriate position.//
#include <stdio.h>
int main () 
{
    int arr[100] = {2, 3, 4, 10, 40};
    int n = 5; 
    int x = 5; 
    int i;

    for (i = n - 1; (i >= 0 && arr[i] > x); i--) {
        arr[i + 1] = arr[i]; 
    }
    arr[i + 1] = x; 
    n++; 

    
    printf("Array after insertion: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}