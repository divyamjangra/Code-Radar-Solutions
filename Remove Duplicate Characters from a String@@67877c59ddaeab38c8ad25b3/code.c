#include <stdio.h>
#include <string.h>

int main() {
    char str[100], result[100];
    int freq[256] = {0};
    int j = 0;

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    for (int i = 0; str[i] != '\0'; i++) {
        if (freq[str[i]] == 0) {
            result[j++] = str[i];
            freq[str[i]]++;
        }
    }

    result[j] = '\0';

    printf("%s\n", result);

    return 0;
}
