#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count[256] = {0};

    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        count[str[i]]++;
    }

    for (int i = 0; str[i] != '\0'; i++) {
        if (count[str[i]] == 1) {
            printf("%c\n", str[i]);
            return 0;
        }
    }

    printf("-\n");

    return 0;
}
