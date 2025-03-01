#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int leaders[N];  // Array to store leaders
    int leader_count = 0;
    
    int max_right = arr[N - 1];  // The last element is always a leader
    leaders[leader_count++] = max_right;
    
    // Traverse the array from right to left to find leaders
    for (int i = N - 2; i >= 0; i--) {
        if (arr[i] >= max_right) {
            leaders[leader_count++] = arr[i];
            max_right = arr[i];  // Update the max_right
        }
    }

    // Print the leaders in the correct order (from left to right)
    for (int i = leader_count - 1; i >= 0; i--) {
        printf("%d ", leaders[i]);
    }
    
    return 0;
}
