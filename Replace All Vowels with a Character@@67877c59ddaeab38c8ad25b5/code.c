#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    char replacement;
    int i;

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  
    scanf("%c", &replacement);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || 
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            str[i] = replacement;
        }
    }

    printf("%s\n", str);
    return 0;
}
