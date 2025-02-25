#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    qsort(arr, N, sizeof(int), compare);

    int median;
    if (N % 2 == 1) {
        median = arr[N / 2];
    } else {
        median = (arr[N / 2 - 1] + arr[N / 2]) / 2;
    }

    printf("%d\n", median);

    return 0;
}
