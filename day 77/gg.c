//Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.//
#include <stdio.h>
int main()
{
    FILE *inputFile, *outputFile;
    int ch;

    // Open input file for reading
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        perror("Error opening input file");
        return 1;
    }

    // Open output file for writing
    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        perror("Error opening output file");
        fclose(inputFile);
        return 1;
    }

    // Read from input file, convert to uppercase, and write to output file
    while ((ch = fgetc(inputFile)) != EOF) {
        if (ch >= 'a' && ch <= 'z') {
            ch = ch - ('a' - 'A'); 
            
        }
        fputc(ch, outputFile);
    }

    
    fclose(inputFile);
    fclose(outputFile);

    return 0;
}