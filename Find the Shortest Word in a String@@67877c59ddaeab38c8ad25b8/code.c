#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    char shortest[1000];
    char word[1000];
    int i, j, minLength = 1000;

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 

    i = 0;
    while (sscanf(str + i, "%s", word) == 1) {
        int wordLength = strlen(word);
        if (wordLength < minLength) {
            minLength = wordLength;
            strcpy(shortest, word);
        }
        i += wordLength + 1;  
    }

    printf("%s\n", shortest);
    return 0;
}
