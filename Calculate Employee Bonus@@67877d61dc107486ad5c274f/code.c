#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    int N;
    scanf("%d", &N);
    
    struct Employee employees[N];
    
    for (int i = 0; i < N; i++) {
        scanf("%d %s %f", &employees[i].id, employees[i].name, &employees[i].salary);
    }
    
    for (int i = 0; i < N; i++) {
        float bonus;
        if (employees[i].salary < 50000) {
            bonus = employees[i].salary * 0.10;
        } else {
            bonus = employees[i].salary * 0.05;
        }
        printf("Employee ID: %d, Name: %s, Bonus: %.2f\n", employees[i].id, employees[i].name, bonus);
    }

    return 0;
}
