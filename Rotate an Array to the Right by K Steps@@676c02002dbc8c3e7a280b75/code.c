#include <stdio.h>

void rotateArray(int arr[], int N, int K) {
    K = K % N;
    int temp[K];
    
    for (int i = 0; i < K; i++) {
        temp[i] = arr[N - K + i];
    }

    for (int i = N - 1; i >= K; i--) {
        arr[i] = arr[i - K];
    }

    for (int i = 0; i < K; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int N, K;
    scanf("%d", &N);
    
    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    
    scanf("%d", &K);
    
    rotateArray(arr, N, K);

    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
