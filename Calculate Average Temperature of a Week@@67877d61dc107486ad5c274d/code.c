#include <stdio.h>

struct Day {
    char name[20];
    float temperature;
};

int main() {
    struct Day days[7];
    float totalTemperature = 0;

    for (int i = 0; i < 7; i++) {
        scanf("%s %f", days[i].name, &days[i].temperature);
        totalTemperature += days[i].temperature;
    }

    float averageTemperature = totalTemperature / 7;
    printf("Average Temperature: %.2f\n", averageTemperature);

    return 0;
}
