#include <stdio.h>
#include <math.h>

int armstrong(int n) 
{
    int original, remainder, result = 0, digits = 0;

    original = n;

    
    while (original != 0) {
        digits++;
        original /= 10;
    }

    original = n;

    while (original != 0) {
        remainder = original % 10;
        result += pow(remainder, digits);
        original /= 10;
    }

    return (result == n);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (armstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}