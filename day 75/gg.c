//Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.//
#include <stdio.h>
int main() {
    FILE *file;
    char text[256];

    // Open the file in append mode
    file = fopen("example.txt", "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    
    printf("Enter a line of text to append to the file:\n");
    fgets(text, sizeof(text), stdin);

    
    fputs(text, file);

    fclose(file);

    printf("Text appended successfully.\n");
    return 0;
}