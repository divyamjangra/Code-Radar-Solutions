#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    if (num == 0) {
        printf("0");
    } else {
        int started = 0;
        for (int i = 31; i >= 0; i--) {
            int bit = (num >> i) & 1;
            if (bit || started) {
                printf("%d", bit);
                started = 1;
            }
        }
    }

    return 0;
}
