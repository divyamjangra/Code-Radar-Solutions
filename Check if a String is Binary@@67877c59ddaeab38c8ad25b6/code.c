#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int is_binary = 1;

    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != '0' && str[i] != '1') {
            is_binary = 0;
            break;
        }
    }

    if (is_binary) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}

