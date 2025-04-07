#include<stdio.h>
void factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}
int factorialRange(int start, int end) {
    for (int i = start; i <= end; i++) {
        printf("%d\n", factorial(i));
    }
}
