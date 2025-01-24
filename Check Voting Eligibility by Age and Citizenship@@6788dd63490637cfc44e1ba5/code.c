#include <stdio.h>

int main() {
    int age, isCitizen;
    scanf("%d %d", &age, &isCitizen);

    if (age >= 18 && isCitizen == 1) {
        printf("Eligible");
    } else {
        printf("Not Eligible");
    }

    return 0;
}
