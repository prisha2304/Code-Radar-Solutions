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
int fibonacciSeries(int n) {
    if (n == 0) return 0; // Base case 1
    if (n == 1) return 1; // Base case 2
    return fibonacciSeries(n - 1) + fibonacciSeries(n - 2); // Recursive call
}

// Function to print Fibonacci series using recursion
void printFibonacciSeries(int n, int i) {
    if (i == n) return; // Base condition to stop recursion
    printf("%d ", fibonacciSeries(i)); // Print the ith Fibonacci number
    printFibonacciSeries(n, i + 1); // Recursive call for next number
}
