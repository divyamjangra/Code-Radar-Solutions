#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        int num = i % 2; 
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num = 1 - num; 
        }
        printf("\n");
    }
    return 0;
}
