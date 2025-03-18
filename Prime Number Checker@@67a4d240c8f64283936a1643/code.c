#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int num, isprime;

    for(int i = 1; i <= n; i++) {
        scanf("%d", &num);

        // If number is 1 or negative, it's not prime
        if(num <= 1) {
            printf("%d\n", 0);
            continue;  // Skip checking for primality
        }

        isprime = 1;  // Assume number is prime

        for(int j = 2; j <= num / 2; j++) {
            if(num % j == 0) {
                isprime = 0;  // Found a divisor, not prime
                break;
            }
        }

        printf("%d\n", isprime);
    }

    return 0;
}
