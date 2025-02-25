#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int countDistinctSubstrings(char str[]) {
    int n = strlen(str);
    int totalSubstrings = 0;
    

    char **substrings = (char **)malloc(sizeof(char*) * n * (n + 1) / 2);
    int count = 0;
    

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            substrings[count] = (char *)malloc((j - i + 2) * sizeof(char)); 
            strncpy(substrings[count], &str[i], j - i + 1);
            substrings[count][j - i + 1] = '\0';
            count++;
        }
    }


    for (int i = 0; i < count; i++) {
        int isDistinct = 1;
        for (int j = 0; j < i; j++) {
            if (strcmp(substrings[i], substrings[j]) == 0) {
                isDistinct = 0;
                break;
            }
        }
        if (isDistinct) {
            totalSubstrings++;
        }
        free(substrings[i]);
    }

    free(substrings);
    return totalSubstrings;
}

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    

    str[strcspn(str, "\n")] = '\0';

    printf("%d\n", countDistinctSubstrings(str));
    
    return 0;
}
