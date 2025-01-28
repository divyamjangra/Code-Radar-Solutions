#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        char ch = 'Z' - i;
        for (int j = 0; j <= i; j++) {
            printf("%c ", ch--);
        }
        printf("\n");
    }
    return 0;
}
