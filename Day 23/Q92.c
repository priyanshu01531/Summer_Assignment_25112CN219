#include <stdio.h>

int main() {
    char str[] = "programming";
    int freq[256] = {0};

    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    int maxFreq = 0;
    char maxChar;

    for (int i = 0; i < 256; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxChar = (char)i;
        }
    }

    printf("Maximum Occurring Character: %c\n", maxChar);
    printf("Frequency: %d\n", maxFreq);

    return 0;
}