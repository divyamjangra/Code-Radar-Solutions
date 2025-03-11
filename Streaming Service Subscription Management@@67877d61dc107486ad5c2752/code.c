#include <stdio.h>
#include <string.h>

struct Subscription {
    char userName[100];
    char subscriptionType[20];
    float subscriptionCost;
};

int main() {
    int N;
    scanf("%d", &N);
    
    struct Subscription users[N];
    int basicCount = 0, standardCount = 0, premiumCount = 0;
    float basicRevenue = 0, standardRevenue = 0, premiumRevenue = 0;
    
    for (int i = 0; i < N; i++) {
        scanf("%s %s %f", users[i].userName, users[i].subscriptionType, &users[i].subscriptionCost);
        
        if (strcmp(users[i].subscriptionType, "Basic") == 0) {
            basicCount++;
            basicRevenue += users[i].subscriptionCost;
        } else if (strcmp(users[i].subscriptionType, "Standard") == 0) {
            standardCount++;
            standardRevenue += users[i].subscriptionCost;
        } else if (strcmp(users[i].subscriptionType, "Premium") == 0) {
            premiumCount++;
            premiumRevenue += users[i].subscriptionCost;
        }
    }
    
    printf("Basic: %d Users, Revenue: %.2f; Standard: %d Users, Revenue: %.2f; Premium: %d Users, Revenue: %.2f\n", 
           basicCount, basicRevenue, standardCount, standardRevenue, premiumCount, premiumRevenue);
    
    return 0;
}
