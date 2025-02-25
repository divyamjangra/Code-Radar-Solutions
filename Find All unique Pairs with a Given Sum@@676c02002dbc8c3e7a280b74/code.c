#include <stdio.h>
#include <stdbool.h>

int main() {
    int N, T;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    
    scanf("%d", &T);
    
    bool printed[N];  
    for (int i = 0; i < N; i++) {
        printed[i] = false;
    }

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (arr[i] + arr[j] == T && !printed[i] && !printed[j]) {
                printf("%d %d\n", arr[i], arr[j]);
                printed[i] = true;
                printed[j] = true;
            }
        }
    }

    return 0;
}
