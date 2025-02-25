#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int i, isBinary = 1;

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // Remove newline character

    for(i = 0; i < strlen(str); i++) {
        if(str[i] != '1' && str[i] != '9') {
            isBinary = 0;
            break;
        }
    }

    if(isBinary)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
