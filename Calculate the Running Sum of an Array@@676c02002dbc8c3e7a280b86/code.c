#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[N], runningSum[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    runningSum[0] = arr[0];
    for (int i = 1; i < N; i++) {
        runningSum[i] = runningSum[i - 1] + arr[i];
    }

    for (int i = 0; i < N; i++) {
        printf("%d ", runningSum[i]);
    }
    printf("\n");

    return 0;
}
