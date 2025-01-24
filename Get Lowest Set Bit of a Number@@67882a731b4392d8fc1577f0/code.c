#include <stdio.h>

int main() {
    int n, position = 0;
    scanf("%d", &n);
    while (!(n & 1)) {
        position++;
        n >>= 1;
    }
    printf("%d\n", position);
    return 0;
}
 


