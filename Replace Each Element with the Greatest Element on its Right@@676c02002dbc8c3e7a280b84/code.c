#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int maxRight = -1;
    for (int i = N - 2; i >= 0; i--) {
        int temp = arr[i];
        arr[i] = maxRight;
        if (temp > maxRight) {
            maxRight = temp;
        }
    }

    arr[N - 1] = -1;

    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
