#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int length, i;

    scanf("%s", str);
    length = strlen(str);

    for (i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }

    printf("%s\n", str);

    return 0;
}
