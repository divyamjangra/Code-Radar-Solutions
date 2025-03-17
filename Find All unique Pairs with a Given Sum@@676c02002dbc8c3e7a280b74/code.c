#include <stdio.h>

void findPairs(int arr[], int n, int target) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                int found = 0;
                for (int k = 0; k < i; k++) {
                    if (arr[k] == arr[i]) {
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("%d %d\n", arr[i], arr[j]);
                }
            }
        }
    }
}

int main() {
    int n, target;

    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &target);

    findPairs(arr, n, target);

    return 0;
}
