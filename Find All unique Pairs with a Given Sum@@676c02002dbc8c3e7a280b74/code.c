#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void distinctPairs(int arr[], int n, int target) {
    int res[1000][2];
    int res_count = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                int first = arr[i] < arr[j] ? arr[i] : arr[j];
                int second = arr[i] > arr[j] ? arr[i] : arr[j];
                bool isDistinct = true;

                for (int k = 0; k < res_count; k++) {
                    if (res[k][0] == first && res[k][1] == second) {
                        isDistinct = false;
                        break;
                    }
                }
                
                if (isDistinct) {
                    res[res_count][0] = first;
                    res[res_count][1] = second;
                    res_count++;
                }
            }
        }
    }

    for (int i = 0; i < res_count; i++) {
        printf("%d %d\n", res[i][0], res[i][1]);
    }
}

int main() {
    int arr[] = {1, 5, 7, -1, 5};
    int target = 6;
    int n = sizeof(arr) / sizeof(arr[0]);
    
    distinctPairs(arr, n, target);
    
    return 0;
}