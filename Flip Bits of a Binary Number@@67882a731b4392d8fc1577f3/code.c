#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    int result = ~num;
    printf("%d", result);

    return 0;
}
