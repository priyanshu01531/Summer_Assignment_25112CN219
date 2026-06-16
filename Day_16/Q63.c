#include <stdio.h>

int main() {
    int arr[] = {2, 4, 7, 11, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 15;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == target) {
                printf("Pair Found: %d %d", arr[i], arr[j]);
            }
        }
    }

    return 0;
}