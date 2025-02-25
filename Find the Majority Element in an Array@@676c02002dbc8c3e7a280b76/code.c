#include <stdio.h>

int majorityElement(int arr[], int N) {
    int count = 0, candidate = -1;

    for (int i = 0; i < N; i++) {
        if (count == 0) {
            candidate = arr[i];
        }
        count += (arr[i] == candidate) ? 1 : -1;
    }

    count = 0;
    for (int i = 0; i < N; i++) {
        if (arr[i] == candidate) {
            count++;
        }
    }

    return (count > N / 2) ? candidate : -1;
}

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int result = majorityElement(arr, N);
    printf("%d\n", result);

    return 0;
}
