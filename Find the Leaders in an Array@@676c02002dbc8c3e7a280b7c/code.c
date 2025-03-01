#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int max_right = arr[N - 1]; // The last element is always a leader
    printf("%d ", max_right);
    
    // Iterate from second last element to the first element
    for (int i = N - 2; i >= 0; i--) {
        if (arr[i] >= max_right) {
            printf("%d ", arr[i]);
            max_right = arr[i]; // Update the max_right
        }
    }
    
    return 0;
}
