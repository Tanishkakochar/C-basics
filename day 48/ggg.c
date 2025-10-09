//Reverse each word in a sentence without changing the word order//
#include <stdio.h>
int main()
 {
    char str[200], temp;
    int i = 0, start, end;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
    
        while (str[i] == ' ' && str[i] != '\0') {
            i++;
        }
        start = i;

        while (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            i++;
        }
        end = i - 1;
        while (start < end) {
            temp = str[start];
            str[start] = str[end];
            str[end] = temp;
            start++;
            end--;
        }
    }

    printf("Reversed words in the sentence: %s", str);
    return 0;
}