#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int freq[256] = {0};

    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        freq[str[i]]++;
    }

    for (int i = 0; str[i] != '\0'; i++) {
        if (freq[str[i]] != 0) {
            printf("%c: %d\n", str[i], freq[str[i]]);
            freq[str[i]] = 0; 
        }
    }

    return 0;
}
