#include <stdio.h>
#include <string.h>

// Function to swap two words
void swap(char word1[199], char word2[199]) {
  char temp[199];
  int i = 0;
  while (word1[i] != '\0') {
    temp[i] = word1[i];
    i++;
  }
  temp[i] = '\0';

  i = 0;
  while (word2[i] != '\0') {
    word1[i] = word2[i];
    i++;
  }
  word1[i] = '\0';

  i = 0;
  while (temp[i] != '\0') {
    word2[i] = temp[i];
    i++;
  }
  word2[i] = '\0';
}

// Function to sort the words
void sortWords(char words[][199], int numWords) {
  for (int i = 0; i < numWords - 1; i++) {
    for (int j = 0; j < numWords - i - 1; j++) {
      if (strcmp(words[j], words[j + 1]) > 0) {
        // Swap the words
        swap(words[j], words[j + 1]);
      }
    }
  }
}
