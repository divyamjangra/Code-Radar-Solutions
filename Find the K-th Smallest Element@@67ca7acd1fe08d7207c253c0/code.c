#include <stdio.h>

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        int temp = arr[minIdx];
        arr[minIdx] = arr[i];
        arr[i] = temp;
    }
}

int kthSmallest(int arr[], int n, int k) {
    if (k < 1 || k > n) {
        return -1;
    }
    
    selectionSort(arr, n);
    
    return arr[k - 1];
}


