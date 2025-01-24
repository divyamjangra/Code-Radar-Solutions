#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    int position = __builtin_ffs(num);
    printf("%d", position);

    return 0;
}
