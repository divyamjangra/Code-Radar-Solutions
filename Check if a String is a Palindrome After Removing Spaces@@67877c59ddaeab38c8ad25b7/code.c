#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000], cleaned_str[1000];
    int i, j = 0;

    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (isalnum(str[i])) {
            cleaned_str[j++] = tolower(str[i]);
        }
    }
    cleaned_str[j] = '\0';

    int len = strlen(cleaned_str);
    int is_palindrome = 1;

    for (i = 0; i < len / 2; i++) {
        if (cleaned_str[i] != cleaned_str[len - 1 - i]) {
            is_palindrome = 0;
            break;
        }
    }

    if (is_palindrome) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}

