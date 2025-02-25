#include <stdio.h>
#include <string.h>

void reverseWord(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

void reverseWords(char *str) {
    char *wordStart = str;
    char *temp = str;

    while (*temp) {
        temp++;
        if (*temp == '\0' || *temp == ' ') {
            reverseWord(wordStart, temp - 1);
            wordStart = temp + 1;
        }
    }
}

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove trailing newline character

    reverseWords(str);
    printf("%s\n", str);

    return 0;
}
