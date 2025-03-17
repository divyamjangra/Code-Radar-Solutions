#include <stdio.h>
#include <stdlib.h>

void findPairs(int arr[], int n, int target) {
    qsort(arr, n, sizeof(int), (int (*)(const void*, const void*))strcmp);

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                printf("%d %d\n", arr[i], arr[j]);
                break;
            }
        }
    }
}
