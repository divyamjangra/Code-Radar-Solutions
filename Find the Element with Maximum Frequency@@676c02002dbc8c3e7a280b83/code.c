#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int freq[1000000] = {0};
    int maxFreq = 0;
    int result = -1;

    for (int i = 0; i < N; i++) {
        freq[arr[i]]++;
        if (freq[arr[i]] > maxFreq || (freq[arr[i]] == maxFreq && arr[i] < result)) {
            maxFreq = freq[arr[i]];
            result = arr[i];
        }
    }

    printf("%d\n", result);

    return 0;
}
