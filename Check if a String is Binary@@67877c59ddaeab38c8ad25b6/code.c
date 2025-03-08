#include <stdio.h>
#include <string.h>

int isBinaryString(char str[]) {
    if (strlen(str) == 0) {
        return 1; // Consider an empty string as a binary string
    }

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] != '0' && str[i] != '1') {
            return 0;  // Not a binary string
        }
    }
    return 1;  // Binary string
}

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin); 

    str[strcspn(str, "\n")] = 0;

    if (isBinaryString(str)) {
        printf("Yes\n");
    } else {
        printf("No\n"); 
    }

    return 0;
}