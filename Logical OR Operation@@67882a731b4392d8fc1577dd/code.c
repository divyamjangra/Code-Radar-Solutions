#include <stdio.h>

int main() {
    int a, b;

    // Input two space-separated integers
    scanf("%d %d", &a, &b);

    // Check if the numbers are not equal
    if (a >0 || b>0)
        printf("True");
    else
        printf("False");

    return 0;
}
