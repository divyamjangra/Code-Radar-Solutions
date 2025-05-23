
#include <stdlib.h>

int findUnsortedSubarray(int arr[], int n) {
    int* temp = (int*) malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        temp[i] = arr[i];
    }

    // Sort the temporary array
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (temp[i] > temp[j]) {
                int t = temp[i];
                temp[i] = temp[j];
                temp[j] = t;
            }
        }
    }

    int start = -1, end = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] != temp[i]) {
            if (start == -1) {
                start = i;
            }
            end = i;
        }
    }

    free(temp);
    if (start == -1) {
        return 0;
    }

    return end - start + 1;
}