//Search for an element in an array using linear search.//
#include <stdio.h>
int main() {
    int n, i, search, array[100];
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    printf("Enter the number to search: ");
    scanf("%d", &search);
    for (i = 0; i < n; i++) {
        if (array[i] == search) {
            printf("%d found at index %d\n", search, i);
            return 0;
        }
    }
    printf("%d not found in the array\n", search);
    return 0;
}