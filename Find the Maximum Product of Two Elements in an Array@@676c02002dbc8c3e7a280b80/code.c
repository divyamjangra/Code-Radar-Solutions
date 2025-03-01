#include <stdio.h>

int maxProduct(int arr[], int n) {
    int max1 = arr[0], max2 = arr[1];
    int min1 = arr[0], min2 = arr[1];
    
    for (int i = 2; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2) {
            max2 = arr[i];
        }

        if (arr[i] < min1) {
            min2 = min1;
            min1 = arr[i];
        } else if (arr[i] < min2) {
            min2 = arr[i];
        }
    }

    return (max1 * max2 > min1 * min2) ? max1 * max2 : min1 * min2;
}

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d\n", maxProduct(arr, n));

    return 0;
}
