#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int smallest = 1000000, secondSmallest = 1000000;
    
    for (int i = 0; i < N; i++) {
        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        } else if (arr[i] < secondSmallest && arr[i] != smallest) {
            secondSmallest = arr[i];
        }
    }

    if (secondSmallest == 1000000) {
        printf("-1\n");
    } else {
        printf("%d\n", secondSmallest);
    }

    return 0;
}
