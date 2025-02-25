#include <stdio.h>

int main() {
    int N, K, count = 0;
    scanf("%d %d", &N, &K);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < N; i++) {
        if (arr[i] == K) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
