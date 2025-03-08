
void copyString(char dest[], char src[]) {
  int i = 0;
  while (src[i] != '\0') {
    dest[i] = src[i];
    i++;
  }
  dest[i] = '\0';
}

// Function to perform insertion sort
void insertionSort(char arr[][100], int n) {
  for (int i = 1; i < n; i++) {
    char key[100];
    copyString(key, arr[i]);
    int j = i - 1;
    while (j >= 0 && strcmp(arr[j], key) > 0) {
      copyString(arr[j + 1], arr[j]);
      j--;
    }
    copyString(arr[j + 1], key);
  }
}

// Function to print the array
void printArray(char arr[][100], int n) {
  for (int i = 0; i < n; i++) {
    printf("%s\n", arr[i]);
  }
}
