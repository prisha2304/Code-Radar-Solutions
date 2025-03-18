#include <stdio.h>
#include <math.h>

int isprime(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {  // Optimized to run till sqrt(n)
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

void printPrimesInRange(int a, int b) {
    for (int i = a; i <= b; i++) {
        if (isprime(i)) {
            printf("%d ", i);
        }
    }
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printPrimesInRange(a, b);
    return 0;
}
