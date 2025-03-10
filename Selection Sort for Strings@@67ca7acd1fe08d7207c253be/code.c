#include <stdio.h>
#include <string.h>

void selectionSort(char arr[][200], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (strcmp(arr[j], arr[minIndex]) < 0) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            char temp[200];
            strcpy(temp, arr[i]);
            strcpy(arr[i], arr[minIndex]);
            strcpy(arr[minIndex], temp);
        }
    }
}

void printArray(char arr[][200], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    char arr[n][200]; 
    for(int i = 0; i < n; i++){
        scanf("%199s", arr[i]); 
    }
    selectionSort(arr, n);
    printArray(arr, n);
    return 0;
}