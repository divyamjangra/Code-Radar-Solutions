#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i = 0, j = 0;

    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters from the strings if present
    while (str1[i] != '\0') {
        i++;
    }
    if (str1[i-1] == '\n') {
        str1[i-1] = '\0';
    }

    while (str2[j] != '\0') {
        j++;
    }
    if (str2[j-1] == '\n') {
        str2[j-1] = '\0';
    }

    // Concatenate str2 to str1
    i = 0;
    while (str2[i] != '\0') {
        str1[j] = str2[i];
        j++;
        i++;
    }

    str1[j] = '\0';

    printf("%s\n", str1);
    return 0;
}
