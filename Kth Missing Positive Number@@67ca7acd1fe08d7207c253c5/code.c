#include <stdio.h>

int findKthMissing(int arr[], int n, int k) {
    int missing = 0;
    int current = 1; 
    int i = 0;

    while (k > 0) {
        if (i < n && arr[i] == current) {
            i++;  
        } else {
            missing++;
            if (missing == k) {
                return current;  
            }
        }
        current++;  
    }
    return -1;  
}