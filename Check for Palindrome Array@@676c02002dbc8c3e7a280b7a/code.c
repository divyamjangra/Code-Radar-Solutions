#include <stdio.h>

int isPalindrome(int arr[], int N) {
    for (int i = 0; i < N / 2; i++) {
        if (arr[i] != arr[N - i - 1]) {
            return 0;  // Return 0 if not palindrome
        }
    }
    return 1;  // Return 1 if palindrome
}

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    if (isPalindrome(arr, N)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
