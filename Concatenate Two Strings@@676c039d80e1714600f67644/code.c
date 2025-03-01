#include <stdio.h>

int main() {
    char str1[1000], str2[1000];
    
    fgets(str1, sizeof(str1), stdin);
    
    int i = 0;
    while (str1[i] != '\0') {
        if (str1[i] == '\n') {
            str1[i] = '\0';
            break;
        }
        i++;
    }
    
    fgets(str2, sizeof(str2), stdin);
    
    i = 0;
    while (str2[i] != '\0') {
        if (str2[i] == '\n') {
            str2[i] = '\0';
            break;
        }
        i++;
    }
    
    i = 0;
    while (str1[i] != '\0') {
        i++;
    }
    
    int j = 0;
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
    
    str1[i] = '\0';
    
    printf("%s", str1);
    
    return 0;
}
