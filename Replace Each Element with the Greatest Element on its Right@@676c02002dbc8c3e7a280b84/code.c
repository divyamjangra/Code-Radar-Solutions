#include <stdio.h>

void replaceWithGreatestRight(int arr[], int n) {
    int maxRight = arr[n - 1];
    arr[n - 1] = -1;

    for (int i = n - 2; i >= 0; i--) {
        int temp = arr[i];
        arr[i] = maxRight;
        if (temp > maxRight) {
            maxRight = temp;
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    replaceWithGreatestRight(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
