#include <stdio.h>
#include <string.h>

struct Vehicle {
    char number[20];
    char type[10];
    float toll;
};

int main() {
    int N;
    scanf("%d", &N);
    
    struct Vehicle vehicles[N];
    float totalCars = 0, totalTrucks = 0, totalBikes = 0;
    
    for (int i = 0; i < N; i++) {
        scanf("%s %s %f", vehicles[i].number, vehicles[i].type, &vehicles[i].toll);
        
        if (strcmp(vehicles[i].type, "Car") == 0) {
            totalCars += vehicles[i].toll;
        } else if (strcmp(vehicles[i].type, "Truck") == 0) {
            totalTrucks += vehicles[i].toll;
        } else if (strcmp(vehicles[i].type, "Bike") == 0) {
            totalBikes += vehicles[i].toll;
        }
    }
    
    printf("Cars: %.2f, Trucks: %.2f, Bikes: %.2f\n", totalCars, totalTrucks, totalBikes);
    
    return 0;
}
