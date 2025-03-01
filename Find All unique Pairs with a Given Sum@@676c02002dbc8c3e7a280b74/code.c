#include <stdio.h>
#include <stdlib.h>

void findUniquePairs(int arr[], int n, int target) {
    qsort(arr, n, sizeof(int), (int (*)(const void*, const void*))cmp);

    int left = 0, right = n - 1;

    while (left < right) {
        int sum = arr[left] + arr[right];
        
        if (sum == target) {
            printf("%d %d\n", arr[left], arr[right]);
            while (left < right && arr[left] == arr[left + 1]) left++;
            while (left < right && arr[right] == arr[right - 1]) right--;
            left++;
            right--;
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }
}

int cmp(const int *a, const int *b) {
    return (*a - *b);
}

int main() {
    int n, target;
    
    scanf("%d", &n);
    
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    scanf("%d", &target);
    
    findUniquePairs(arr, n, target);

    return 0;
}
