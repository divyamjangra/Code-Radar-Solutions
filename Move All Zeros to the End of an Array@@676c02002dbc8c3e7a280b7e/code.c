#include <stdio.h>

void moveZerosToEnd(int arr[], int N) {
    int nonZeroIndex = 0;

    for (int i = 0; i < N; i++) {
        if (arr[i] != 0) {
            arr[nonZeroIndex++] = arr[i];
        }
    }

    for (int i = nonZeroIndex; i < N; i++) {
        arr[i] = 0;
    }
}

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    moveZerosToEnd(arr, N);

    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
