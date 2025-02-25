#include <stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int smallestMissingPositive(int arr[], int N) {
    for (int i = 0; i < N; i++) {
        while (arr[i] > 0 && arr[i] <= N && arr[arr[i] - 1] != arr[i]) {
            swap(&arr[i], &arr[arr[i] - 1]);
        }
    }

    for (int i = 0; i < N; i++) {
        if (arr[i] != i + 1) {
            return i + 1;
        }
    }
    return N + 1;
}

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int result = smallestMissingPositive(arr, N);
    printf("%d\n", result);

    return 0;
}
