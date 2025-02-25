#include <stdio.h>
#include <stdlib.h>

int sumOfDigits(int num) {
    num = abs(num);
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < N; i++) {
        printf("%d ", sumOfDigits(arr[i]));
    }
    printf("\n");

    return 0;
}
