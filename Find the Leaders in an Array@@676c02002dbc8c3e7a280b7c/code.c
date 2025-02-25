#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int max_from_right = arr[N - 1];
    printf("%d ", max_from_right);
    
    for (int i = N - 2; i >= 0; i--) {
        if (arr[i] >= max_from_right) {
            printf("%d ", arr[i]);
            max_from_right = arr[i];
        }
    }

    return 0;
}
