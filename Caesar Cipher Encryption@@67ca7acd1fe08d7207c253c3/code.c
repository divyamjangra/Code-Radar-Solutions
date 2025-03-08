void caesarCipher(char message[], int shift, char encrypted[]) {
    int i = 0;
    while (message[i] != '\0') {
        if (message[i] >= 'a' && message[i] <= 'z') {
            encrypted[i] = 'a' + (message[i] - 'a' + shift) % 26;
        } else if (message[i] >= 'A' && message[i] <= 'Z') {
            encrypted[i] = 'A' + (message[i] - 'A' + shift) % 26;
        } else {
            encrypted[i] = message[i];
        }
        i++;
    }
    encrypted[i] = '\0'; 
}
