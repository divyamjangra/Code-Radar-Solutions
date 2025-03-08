void swap(char str1[199], char str2[199]) {
    char temp[199];
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
}

void bubbleSort(char arr[][199], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void printArray(char arr[][199], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }
}
