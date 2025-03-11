#include <stdio.h>
#include <string.h>

struct MovieTicket {
    char movieName[100];
    char ticketType[10];
    float ticketPrice;
};

int main() {
    int N;
    scanf("%d", &N);
    
    struct MovieTicket tickets[N];
    float totalStandard = 0, totalPremium = 0, totalVIP = 0;
    
    for (int i = 0; i < N; i++) {
        scanf("%s %s %f", tickets[i].movieName, tickets[i].ticketType, &tickets[i].ticketPrice);
        
        if (strcmp(tickets[i].ticketType, "Standard") == 0) {
            totalStandard += tickets[i].ticketPrice;
        } else if (strcmp(tickets[i].ticketType, "Premium") == 0) {
            totalPremium += tickets[i].ticketPrice;
        } else if (strcmp(tickets[i].ticketType, "VIP") == 0) {
            totalVIP += tickets[i].ticketPrice;
        }
    }
    
    printf("Standard: %.2f, Premium: %.2f, VIP: %.2f\n", totalStandard, totalPremium, totalVIP);
    
    return 0;
}
