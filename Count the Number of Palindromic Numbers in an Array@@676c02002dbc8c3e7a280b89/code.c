#include <stdio.h>

int isPalindrome(int num) {
    if (num < 0) {
        return 0; 
    }

    int original = num, reversed = 0, remainder;
    
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    return original == reversed;
}

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int palindromeCount = 0;
    
    for (int i = 0; i < N; i++) {
        if (isPalindrome(arr[i])) {
            palindromeCount++;
        }
    }

    printf("%d\n", palindromeCount);

    return 0;
}

