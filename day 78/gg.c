//Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.//
#include <stdio.h>
int main()
{
    FILE *file;
    char filename[100], ch;
    int vowels = 0, consonants = 0;

    
    printf("Enter the filename: ");
    scanf("%s", filename);

    
    file = fopen(filename, "r");
    if (file == NULL)
    {
        printf("Could not open file %s\n", filename);
        return 1;
    }

    
    while ((ch = fgetc(file)) != EOF)
    {
        
        ch = tolower(ch);
        if ((ch >= 'a' && ch <= 'z')) 
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
    }

    // Close the file
    fclose(file);

  
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}