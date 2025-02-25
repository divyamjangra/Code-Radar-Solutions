#include <stdio.h>

int countOccurrences(char str[], char ch) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    return count;
}

int main() {
    char str[100], ch;

    fgets(str, sizeof(str), stdin);
    scanf("%c", &ch);

    int result = countOccurrences(str, ch);
    printf("%d\n", result);

    return 0;
}
