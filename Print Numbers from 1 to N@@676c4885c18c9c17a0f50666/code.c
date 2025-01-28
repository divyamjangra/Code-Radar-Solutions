#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int i = 1;
    while (i <= n) {
        printf("%d", i);
        if (i < n) {
            printf(" ");
        }
        i++;
    }
    printf(" \n");
    
    return 0;
}
