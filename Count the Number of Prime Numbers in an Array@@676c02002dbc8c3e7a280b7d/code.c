#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int primeCount = 0;
    for (int i = 0; i < N; i++) {
        if (isPrime(arr[i])) {
            primeCount++;
        }
    }

    printf("%d\n", primeCount);

    return 0;
}
