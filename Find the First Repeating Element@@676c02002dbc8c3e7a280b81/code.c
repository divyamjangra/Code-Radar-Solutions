#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int freq[1000000] = {0};
    int found = -1;

    for (int i = 0; i < N; i++) {
        if (freq[arr[i]] > 0) {
            found = arr[i];
            break;
        } else {
            freq[arr[i]]++;
        }
    }

    printf("%d\n", found);

    return 0;
}
