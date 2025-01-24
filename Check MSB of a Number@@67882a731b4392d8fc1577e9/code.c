#include <stdio.h>
#include <limits.h>

int main() {
    int a;
    scanf("%d", &a);

    if (a & (1 << (sizeof(a) * 8 - 1)))
        printf("Set");
    else
        printf("Not Set");

    return 0;
}
