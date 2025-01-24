#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    int position = num & -num;
    int count = 1;
    
    while (position > 1) {
        position >>= 1;
        count++;
    }

    printf("%d", count);

    return 0;
}

