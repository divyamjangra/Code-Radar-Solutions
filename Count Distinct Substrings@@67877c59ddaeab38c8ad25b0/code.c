#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int countDistinctSubstrings(char* str) {
    int n = strlen(str);
    int totalCount = 0;
    char substrings[n * (n + 1) / 2][n + 1]; 

    for (int i = 0; i < n; i++) {
        for (int len = 1; len <= n - i; len++) {
            strncpy(substrings[totalCount], &str[i], len);
            substrings[totalCount][len] = '\0';
            totalCount++;
        }
    }

    int distinctCount = 0;
    for (int i = 0; i < totalCount; i++) {
        int isDistinct = 1;
        for (int j = 0; j < i; j++) {
            if (strcmp(substrings[i], substrings[j]) == 0) {
                isDistinct = 0;
                break;
            }
        }
        if (isDistinct) {
            distinctCount++;
        }
    }

    return distinctCount;
}

int main() {
    char str[1000];
    scanf("%s", str);
    
    int result = countDistinctSubstrings(str);
    printf("%d\n", result);
    
    return 0;
}

