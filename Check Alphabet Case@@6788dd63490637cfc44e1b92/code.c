#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("%c", ch);
    } else if (ch >= 'a' && ch <= 'z') {
        printf("%c", ch);
    } else {
        printf("%c", ch);
    }

    return 0;
}
