#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

void findPairs(int arr[], int n, int target) {
    qsort(arr, n, sizeof(int), compare);

    int left = 0;
    int right = n - 1;

    while (left < right) {
        int sum = arr[left] + arr[right];

        if (sum == target) {
            printf("%d %d\n", arr[left], arr[right]);
            left++;
            right--;
            while (left < right && arr[left] == arr[left - 1]) left++;
            while (left < right && arr[right] == arr[right + 1]) right--;
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }
}

int main() {
    int N, T;
    scanf("%d", &N);
    int arr[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &T);

    findPairs(arr, N, T);

    return 0;
}
