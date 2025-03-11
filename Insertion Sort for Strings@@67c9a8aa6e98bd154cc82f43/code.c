void insertionSort(char arr[][100], int n) {
    for (int i = 1; i < n; i++) {
        char key[100];
        int j = i - 1;
        while (j >= 0 && strcmp(arr[j], arr[i]) > 0) {
            j--;
        }
        for (int k = i; k > j + 1; k--) {
            for (int m = 0; arr[k-1][m] != '\0'; m++) {
                arr[k][m] = arr[k-1][m];
            }
        }
    }
}

void printArray(char arr[][100], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }
}