
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() 
{
    char sentence[1000];
    char longestWord[100] = "";
    char currentWord[100];
    int i = 0, j = 0, maxLength = 0;

    printf("Enter a sentence: ");
    if (!fgets(sentence, sizeof(sentence), stdin)) return 0;

    i = 0;
    while (sentence[i] != '\0' && sentence[i] != '\n') {
    
        while (sentence[i] != '\0' && sentence[i] != '\n' && !isalnum((unsigned char)sentence[i])) i++;
        if (sentence[i] == '\0' || sentence[i] == '\n') break;

        j = 0;
    
        while (sentence[i] != '\0' && sentence[i] != '\n' && isalnum((unsigned char)sentence[i]) && j < (int)sizeof(currentWord) - 1) {
            currentWord[j++] = sentence[i++];
        }
        currentWord[j] = '\0';

        if (j > maxLength) {
            maxLength = j;
            strcpy(longestWord, currentWord);
        }

        
        while (sentence[i] != '\0' && sentence[i] != '\n' && isalnum((unsigned char)sentence[i])) i++;
    }

    if (maxLength == 0) {
        printf("No word found.\n");
    } else {
        printf("The longest word is: %s\n", longestWord);
    }
    return 0;
}