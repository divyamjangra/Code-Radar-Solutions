#include <stdio.h>
#include <stdbool.h>

int main() {
    int N, T;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &T);

    for (int i = 0; i < N-1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    bool found[N];
    for (int i = 0; i < N; i++) {
        found[i] = false;
    }

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (arr[i] + arr[j] == T && !found[i] && !found[j]) {
                printf("%d %d\n", arr[i], arr[j]);
                found[i] = true;
                found[j] = true;
            }
        }
    }

    return 0;
}

