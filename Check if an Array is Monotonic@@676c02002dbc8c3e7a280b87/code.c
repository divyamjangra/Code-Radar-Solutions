#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int isIncreasing = 1, isDecreasing = 1;

    for (int i = 1; i < N; i++) {
        if (arr[i] < arr[i - 1]) {
            isIncreasing = 0;
        }
        if (arr[i] > arr[i - 1]) {
            isDecreasing = 0;
        }
    }

    if (isIncreasing || isDecreasing) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
