// largest prime factor
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// Function to find the largest prime factor
long long largestPrimeFactor(long long n) {
    if (n < 0) n = -n; // Handle negative numbers
    if (n <= 1) return -1; // No prime factors for 0, 1, or -1
    long long maxPrime = -1;
    // Remove factors of 2
    while (n % 2 == 0) {
        maxPrime = 2;
        n /= 2;
    }
    // Remove factors of odd numbers starting from 3
    for (long long i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            maxPrime = i;
            n /= i;
        }
    }
    // If n is still > 2, then it is prime
    if (n > 2) {
        maxPrime = n;
    }
    return maxPrime;
}
int main() 
{
    long long num;
    printf("Enter a number: ");
    if (scanf("%lld", &num) != 1)
     {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    long long result = largestPrimeFactor(num);
    if (result == -1)
    {
        printf("No prime factors exist for %lld.\n", num);
    } else
    {
        printf("Largest prime factor of %lld is: %lld\n", num, result);
    }
    return 0;
}
