#include<stdio.h>
void fibonacciSeries(int n, int a, int b) {
    if (n == 0) return; // Base case: stop when no more terms are left

    printf("%d ", a); // Print current Fibonacci number

    // Recursive call for the next number in the series
    fibonacciSeries(n - 1, b, a + b);
}