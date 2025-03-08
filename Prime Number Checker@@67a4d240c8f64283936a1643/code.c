#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0;  // Not prime
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;  // Not prime
        }
    }
    return 1; 