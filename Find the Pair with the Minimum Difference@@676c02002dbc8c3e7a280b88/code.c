#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int N;
    scanf("%d", &N);

    if (N < 2) {
        printf("-1\n");
        return 0;
    }

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort the array
    qsort(arr, N, sizeof(int), compare);

    int min_diff = abs(arr[1] - arr[0]);
    int x = arr[0], y = arr[1];

    // Find the pair with the smallest difference
    for (int i = 1; i < N - 1; i++) {
        int diff = abs(arr[i+1] - arr[i]);
        if (diff < min_diff) {
            min_diff = diff;
            x = arr[i];
            y = arr[i+1];
        }
    }

    printf("%d %d\n", x, y);
    return 0;
}
