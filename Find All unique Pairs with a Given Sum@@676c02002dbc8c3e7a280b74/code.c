#include <stdio.h>
#include <stdlib.h>

int comparePairs(const void *a, const void *b) {
    int *pairA = (int *)a;
    int *pairB = (int *)b;
    if (pairA[0] != pairB[0]) {
        return pairA[0] - pairB[0];
    } else {
        return pairA[1] - pairB[1];
    }
}

void findPairs(int arr[], int n, int target) {
    qsort(arr, n, sizeof(int), comparePairs); // Use comparePairs to sort the array

    int left = 0;
    int right = n - 1;

    int pairs[n][2]; // To store the pairs
    int pairCount = 0;

    // Find all pairs and store them
    while (left < right) {
        int sum = arr[left] + arr[right];

        if (sum == target) {
            pairs[pairCount][0] = arr[left];
            pairs[pairCount][1] = arr[right];
            pairCount++;
            left++;
            right--;
            while (left < right && arr[left] == arr[left - 1]) left++;  // Skip duplicates
            while (left < right && arr[right] == arr[right + 1]) right--;  // Skip duplicates
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }

    // Sort the pairs based on both elements of each pair
    qsort(pairs, pairCount, sizeof(pairs[0]), comparePairs);

    // Print the pairs
    for (int i = 0; i < pairCount; i++) {
        printf("%d %d\n", pairs[i][0], pairs[i][1]);
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
