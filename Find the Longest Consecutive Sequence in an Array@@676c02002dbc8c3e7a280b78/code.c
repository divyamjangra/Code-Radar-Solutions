#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int longestConsecutive(int arr[], int N) {
    if (N == 0) return 0;

    qsort(arr, N, sizeof(int), compare);

    int longest = 1, currentLength = 1;

    for (int i = 1; i < N; i++) {
        if (arr[i] == arr[i - 1]) {
            continue;
        } else if (arr[i] == arr[i - 1] + 1) {
            currentLength++;
        } else {
            longest = (currentLength > longest) ? currentLength : longest;
            currentLength = 1;
        }
    }

    return (currentLength > longest) ? currentLength : longest;
}

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int result = longestConsecutive(arr, N);
    printf("%d\n", result);

    return 0;
}
