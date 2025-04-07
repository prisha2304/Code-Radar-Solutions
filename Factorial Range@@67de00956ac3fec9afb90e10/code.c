#include <stdio.h>
int factorial(int n) {
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}
void factorialRange(int start, int end) {
    if (start > end || start < 0 || end < 0) {
        printf("Invalid range\n");
        return;
    }
    for (int i = start; i <= end; i++) {
        printf("%d\n", factorial(i));
    }
}

