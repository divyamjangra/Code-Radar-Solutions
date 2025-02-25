#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_CHAR 256

int areAnagrams(char str1[], char str2[]) {
    int count1[MAX_CHAR] = {0};
    int count2[MAX_CHAR] = {0};

    // If lengths are different, they cannot be anagrams
    if (strlen(str1) != strlen(str2)) {
        return 0;
    }

    // Count the frequency of each character in both strings
    for (int i = 0; str1[i] != '\0'; i++) {
        count1[tolower(str1[i])]++;
        count2[tolower(str2[i])]++;
    }

    // Compare the frequency of characters in both strings
    for (int i = 0; i < MAX_CHAR; i++) {
        if (count1[i] != count2[i]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char str1[100], str2[100];

    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    if (areAnagrams(str1, str2)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
