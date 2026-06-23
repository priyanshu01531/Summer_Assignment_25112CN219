#include <stdio.h>

int main() {
    char str[] = "programming";
    int visited[256] = {0};

    for (int i = 0; str[i] != '\0'; i++) {
        if (visited[(unsigned char)str[i]]) {
            printf("First Repeating Character: %c\n", str[i]);
            return 0;
        }
        visited[(unsigned char)str[i]] = 1;
    }

    printf("No repeating character found.\n");
    return 0;
}