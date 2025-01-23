#include <stdio.h>
int main() {
    char a[100];
    scanf("%99[^\n]",a);
    printf("You entered: %s",a);
    return 0;
}