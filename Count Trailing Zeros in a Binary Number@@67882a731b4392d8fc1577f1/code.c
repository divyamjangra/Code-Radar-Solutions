#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    int count = __builtin_ctz(num);
    printf("%d", count);

    return 0;
}
