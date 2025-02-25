#include <stdio.h>

int main() {
    int N, T;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    
    scanf("%d", &T);
    
    int foundPairs = 0;
    
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (arr[i] + arr[j] == T) {
                printf("%d %d\n", arr[i], arr[j]);
                foundPairs = 1;
            }
        }
    }

    if (!foundPairs) {
        printf("\n");
    }

    return 0;
}
