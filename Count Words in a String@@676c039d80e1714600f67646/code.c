#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count = 0;
    char *token;

    fgets(str, sizeof(str), stdin);
    
    token = strtok(str, " ");
    while (token != NULL) {
        count++;
        token = strtok(NULL, " ");
    }

    printf("%d\n", count);
    return 0;
}
