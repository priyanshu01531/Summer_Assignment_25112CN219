#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    char longest[50], word[50];
    int maxLen = 0, j = 0;

    printf("Enter sentence: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; ; i++) {

        if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            word[j++] = str[i];
        } else {
            word[j] = '\0';

            if (strlen(word) > maxLen) {
                maxLen = strlen(word);
                strcpy(longest, word);
            }

            j = 0;

            if (str[i] == '\0' || str[i] == '\n')
                break;
        }
    }

    printf("Longest Word = %s", longest);

    return 0;
}