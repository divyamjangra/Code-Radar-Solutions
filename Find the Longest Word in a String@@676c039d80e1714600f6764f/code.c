#include <stdio.h>
#include <string.h>

int main() {
    char str[100], longestWord[100], currentWord[100];
    int maxLength = 0, currentLength = 0;

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove the trailing newline character

    int i = 0, j = 0;
    while (str[i] != '\0') {
        if (str[i] != ' ') {
            currentWord[j++] = str[i]; 
        } else {
            currentWord[j] = '\0';
            if (strlen(currentWord) > maxLength) {
                maxLength = strlen(currentWord);
                strcpy(longestWord, currentWord); 
            }
            j = 0; 
        }
        i++;
    }


    currentWord[j] = '\0';
    if (strlen(currentWord) > maxLength) {
        strcpy(longestWord, currentWord);
    }

    printf("%s\n", longestWord);
    return 0;
}
