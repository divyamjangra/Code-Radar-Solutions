#include <stdio.h>
#include <limits.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int largestEven = INT_MIN;  

    for (int i = 0; i < N; i++) {
        if (arr[i] % 2 == 0) {  
            if (arr[i] > largestEven) {
                largestEven = arr[i];
            }
        }
    }

    if (largestEven == INT_MIN) {
        printf("-1\n");
    } else {
        printf("%d\n", largestEven);  
    }

    return 0;
}

