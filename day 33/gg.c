//Search in a sorted array using binary search.//
#include <stdio.h>
int main () {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10; 
    int left = 0, right = n - 1;
    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        
        if (arr[mid] == x) {
            result = mid;
            break;
        }
        
        else if (arr[mid] < x) {
            left = mid + 1;
        }
        
        else {
            right = mid - 1;
        }
    }

    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found in array\n");
    }

    return 0;
}