//Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.//
#include <stdio.h>
int main ()
{
    char s[100];
    int i, j, maxLength = 0, currentLength;
    int len;

    
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    
    for (len = 0; s[len] != '\0' && s[len] != '\n'; len++);

    
    for (i = 0; i < len; i++) {
        int visited[256] = {0}; 
        currentLength = 0;

        for (j = i; j < len; j++) {
            if (visited[(unsigned char)s[j]] == 1) {
                break;
            } else {
                visited[(unsigned char)s[j]] = 1;
                currentLength++;
            }
        }
        if (currentLength > maxLength) {
            maxLength = currentLength;
        }
    }


    printf("Length of the longest substring without repeating characters: %d\n", maxLength);
    return 0;
}
