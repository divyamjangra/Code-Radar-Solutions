#include <stdio.h>

void print_numbers(int n) {
    for (int i = 1; i <= n; i++) {
        printf("%d ", i); 
    }
}

int main() {
    int n;

    scanf("%d", &n);  
    print_numbers(n);  
    return 0;
}
