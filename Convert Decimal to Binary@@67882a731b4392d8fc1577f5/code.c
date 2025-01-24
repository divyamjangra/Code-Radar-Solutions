#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    if (num == 0) {
        printf("0");
    } else {
        for (int i = 31; i >= 0; i--) {
            int bit = (num >> i) & 1;
            printf("%d", bit);
        }
    }

    return 0;
}

