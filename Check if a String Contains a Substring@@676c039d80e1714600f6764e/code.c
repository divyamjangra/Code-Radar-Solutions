#include <stdio.h>
#include <string.h>

int main() {
    char mainString[100], subString[100];

    fgets(mainString, sizeof(mainString), stdin);
    fgets(subString, sizeof(subString), stdin);


    mainString[strcspn(mainString, "\n")] = '\0';
    subString[strcspn(subString, "\n")] = '\0';

    if (strstr(mainString, subString) != NULL) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
