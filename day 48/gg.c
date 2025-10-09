//Check if one string is a rotation of another.//
#include <stdio.h>
int main()
 {
    char str1[100], str2[100];
    int len1 = 0, len2 = 0, i, j, flag;

    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    while (str1[len1] != '\0') len1++;
    while (str2[len2] != '\0') len2++;

    
    if (len1 != len2) {
        printf("Strings are not rotations of each other.\n");
        return 0;
    }

    
    for (i = 0; i < len1; i++) {
        flag = 1;
        for (j = 0; j < len2; j++) {
            if (str1[(i + j) % len1] != str2[j]) {
                flag = 0;
                break;
            }
        }
        if (flag) {
            printf("Strings are rotations of each other.\n");
            return 0;
        }
    }

    printf("Strings are not rotations of each other.\n");
    return 0;
}