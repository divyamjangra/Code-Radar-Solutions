#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[256] = {0}; 
    int max_freq = 0;
    char most_frequent_char;

    fgets(str, sizeof(str), stdin);
    
    // Count the frequency of each character
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(int)str[i]]++;
    }

    // Find the most frequent character
    for (int i = 0; i < 256; i++) {
        if (freq[i] > max_freq) {
            max_freq = freq[i];
            most_frequent_char = (char)i;
        } else if (freq[i] == max_freq && i < (int)most_frequent_char) {
            most_frequent_char = (char)i;
        }
    }

    printf("%c\n", most_frequent_char);

    return 0;
}
