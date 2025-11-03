//Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.//
#include <stdio.h>
int main (){
    FILE *fp;
    char c;
    int characters = 0, words = 0, lines = 0;
    int in_word = 0;

    fp = fopen("text.txt", "r");
    if (fp == NULL) {
        printf("Could not open file\n");
        return 1;
    }

    while ((c = fgetc(fp)) != EOF) {
        characters++;
        if (c == '\n') {
            lines++;
        }
        if (c == ' ' || c == '\n' || c == '\t') {
            if (in_word) {
                words++;
                in_word = 0;
            }
        } else {
            in_word = 1;
        }
    }

    
    if (in_word) {
        words++;
    }

    fclose(fp);

    printf("Total characters: %d\n", characters);
    printf("Total words: %d\n", words);
    printf("Total lines: %d\n", lines);

    return 0;
}