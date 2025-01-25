#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Input the number of rows

    for (int i = 1; i <= n; i++) {
        // Print alphabets from 'A' to the ith letter
        for (int j = 1; j <= i; j++) {
            printf(" %c", 'A' + j - 1);
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
