#include <stdio.h>

int main(int argc, char const *argv[])
{
    long long int n;
    printf("Enter a number: ");
    scanf("%lld", &n);
    
    long long int res = -1;
    long long int i = 2;
    
    // Handle factor 2 separately (even numbers)
    while (n % 2 == 0) {
        res = 2;
        n /= 2;
    }
    
    // Check odd factors from 3 onwards
    for (i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            res = i;
            n /= i;
        }
    }
    
    // If n is a prime number greater than 2
    if (n > 1) {
        res = n;
    }
    
    if (res != -1) {
        printf("Largest prime factor: %lld\n", res);
    } else {
        printf("No prime factors found (n was 1 or invalid).\n");
    }
    
    return 0;
}
