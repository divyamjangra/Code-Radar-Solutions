#include <stdio.h>
#include <string.h>

void compressString(char str[], char compressed[]) {
    int n = strlen(str);
    int index = 0;  
    int count = 1;  
    
    for (int i = 1; i <= n; i++) {
        if (str[i] == str[i - 1]) {
            count++;
        } else {
            compressed[index++] = str[i - 1]; 
            if (count > 1) {
                index += sprintf(&compressed[index], "%d", count); 
            }
            count = 1; 
        }
    }
    
    compressed[index] = '\0';  
    
    if (strlen(compressed) >= n) {
        strcpy(compressed, str); 
    }
}