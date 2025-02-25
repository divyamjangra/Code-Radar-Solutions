#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int max_count = 0;
    int result = -1;

    // Iterate over the array to count the frequency of each element
    for (int i = 0; i < N; i++) {
        // If element is already processed, skip it
        if (arr[i] == -1) continue;

        int count = 1;
        for (int j = i + 1; j < N; j++) {
            if (arr[i] == arr[j]) {
                count++;
                arr[j] = -1;  // Mark element as visited
            }
        }

        // Update result if this element has a higher frequency or is smaller in case of a tie
        if (count > max_count || (count == max_count && arr[i] < result)) {
            max_count = count;
            result = arr[i];
        }
    }

    printf("%d\n", result);
    return 0;
}
