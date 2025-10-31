//Write a program to take a string input. Change it to sentence case.//
#include <stdio.h>
int main ()
{
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Convert first character to uppercase if it's a letter
    if (str[i] >= 'a' && str[i] <= 'z') {
        str[i] = str[i] - ('a' - 'A');
    }

    // Convert the rest of the string to lowercase
    for (i = 1; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + ('a' - 'A');
        }
    }

    printf("Sentence case: %s", str);
    return 0;
}