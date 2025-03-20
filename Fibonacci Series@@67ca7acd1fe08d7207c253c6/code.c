#include<stdio.h>
// int fibonacciSeries(int n){
//     if (n==0 ){
//         return 0;
//     }
//     else if(n==1){
//         return 1;
//     }
//     else{
//         printf("%d ", fibonacciSeries(n-1)+fibonacciSeries(n-2));
//     }
// }

int fibonacci(int n) {
    if (n == 0) return 0; // Base case 1
    if (n == 1) return 1; // Base case 2
    return fibonacci(n - 1) + fibonacci(n - 2); // Recursive step
}

// Function to print Fibonacci series recursively
void fibonacciSeries(int n, int i) {
    if (i == n) return; // Base condition to stop recursion
    printf("%d ", fibonacci(i)); // Print the ith Fibonacci number
    fibonacciSeries(n, i + 1); // Recursive call for next number
}