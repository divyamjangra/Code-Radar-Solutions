#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < N; i++) {
        int abs_val = (arr[i] > 0) ? arr[i] : -arr[i];
        if (arr[abs_val - 1] < 0) {
            printf("%d\n", abs_val);
            break;
        }
        arr[abs_val - 1] = -arr[abs_val - 1];
    }

    return 0;
}
