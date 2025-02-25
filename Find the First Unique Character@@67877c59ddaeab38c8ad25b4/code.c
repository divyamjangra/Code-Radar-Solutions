#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[256] = {0};

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for (int i = 0; str[i] != '\0'; i++) {
        freq[str[i]]++;
    }

    int found = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (freq[str[i]] == 1) {
            printf("%c\n", str[i]);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("-\n");
    }

    return 0;
}
