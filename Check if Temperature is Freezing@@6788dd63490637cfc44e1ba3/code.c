#include <stdio.h>

int main() {
    float temperature;
    scanf("%f", &temperature);

    if (temperature <= 0) {
        printf("Freezing");
    } else {
        printf("Above Freezing");
    }

    return 0;
}
