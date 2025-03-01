#include <stdio.h>
#include <stdlib.h>

// Declaration of the compare function
int compare(const void *a, const void *b);

void findPairs(int arr[], int n, int target) {
    // Sort the array to make it easier to find pairs
    qsort(arr, n, sizeof(int), compare);
    
    int left = 0;
    int right = n - 1;

    while (left < right) {
        int sum = arr[left] + arr[right];

        if (sum == target) {
            // Print the pair in ascending order
            if (arr[left] < arr[right]) {
                printf("%d %d\n", arr[left], arr[right]);
            } else {
                printf("%d %d\n", arr[right], arr[left]);
            }
            left++;
            right--;
            
            // Skip duplicates
            while (left < right && arr[left] == arr[left - 1]) left++;
            while (left < right && arr[right] == arr[right + 1]) right--;
        } 
        else if (sum < target) {
            left++;
        } 
        else {
            right--;
        }
    }
}

// Compare function for qsort
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int N, T;

    // Read input
    scanf("%d", &N);
    int arr[N];
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &T);

    // Find and print pairs
    findPairs(arr, N, T);

    return 0;
}

