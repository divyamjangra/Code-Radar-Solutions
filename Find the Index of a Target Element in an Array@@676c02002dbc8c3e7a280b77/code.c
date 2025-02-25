#include <stdio.h>

int findTargetIndex(int arr[], int N, int T) {
    for (int i = 0; i < N; i++) {
        if (arr[i] == T) {
            return i;
        }
    }
    return -1;
}

int main() {
    int N, T;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &T);

    int result = findTargetIndex(arr, N, T);
    printf("%d\n", result);

    return 0;
}
