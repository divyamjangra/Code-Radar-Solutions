void selectionSort(char arr[][100], int n) {
    for (int i = 0; i < n - 1; i++) {
        // Find minimum element in the unsorted part
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (strcmp(arr[j], arr[min_idx]) < 0) {
                min_idx = j;
            }
        }
        // Swap if minimum is found at different position
        if (min_idx != i) {
            char temp[100];
            strcpy(temp, arr[i]);
            strcpy(arr[i], arr[min_idx]);
            strcpy(arr[min_idx], temp);
        }
    }
}

void printArray(char arr[][100], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }
}