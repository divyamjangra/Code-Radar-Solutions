#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int leaders[N]; 
    int leader_count = 0;
    
    int max_right = arr[N - 1];  
    leaders[leader_count++] = max_right;
    
    for (int i = N - 2; i >= 0; i--) {
        if (arr[i] >= max_right) {
            leaders[leader_count++] = arr[i];
            max_right = arr[i];  
        }
    }
    for (int i = leader_count - 1; i >= 0; i--) {
        printf("%d ", leaders[i]);
    }
    
    return 0;
}
