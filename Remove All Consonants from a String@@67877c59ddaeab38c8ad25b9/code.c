#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int i;

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // Remove newline character

    for(i = 0; i < strlen(str); i++) {
        if(str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' &&
           str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U') {
            for(int j = i; j < strlen(str); j++) {
                str[j] = str[j+1];
            }
            i--; // Adjust the index after shifting characters
        }
    }

    printf("%s\n", str);

    return 0;
}
