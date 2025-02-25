#include <stdio.h>
#include <string.h>

int main() {
    char str[1000], cleanedStr[1000];
    int i, j = 0, len, isPalindrome = 1;

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  

    len = strlen(str);


    for(i = 0; i < len; i++) {
        if(str[i] != ' ') {
            cleanedStr[j++] = str[i];
        }
    }
    cleanedStr[j] = '\0';


    len = strlen(cleanedStr);
    for(i = 0; i < len / 2; i++) {
        if(cleanedStr[i] != cleanedStr[len - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if(isPalindrome)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
