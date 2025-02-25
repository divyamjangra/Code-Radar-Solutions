#include <stdio.h>
#include <string.h>

int isPalindrome(char str[], int start, int end) {
    while (start < end) {
        if (str[start] != str[end]) {
            return 0; 
        }
        start++;
        end--;
    }
    return 1; 
}

void findLargestPalindrome(char str[]) {
    int n = strlen(str);
    int maxLength = 1;
    int start = 0;
    

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {

            if (isPalindrome(str, i, j) && (j - i + 1) > maxLength) {
                maxLength = j - i + 1;
                start = i;
            }
        }
    }


    for (int i = start; i < start + maxLength; i++) {
        printf("%c", str[i]);
    }
    printf("\n");
}

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    

    str[strcspn(str, "\n")] = '\0';

    findLargestPalindrome(str);
    
    return 0;
}
