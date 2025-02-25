#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int largestEven = -1;  

    for (int i = 0; i < N; i++) {
        if (arr[i] % 2 == 0) {  
            if (arr[i] > largestEven) {
                largestEven = arr[i]; 
            }
        }
    }

    printf("%d\n", largestEven);

    return 0;
}
