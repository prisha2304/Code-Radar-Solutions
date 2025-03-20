// #include<stdio.h>
// int fibonacciSeries(int n){
//     if (n==0 ){
//         return 0;
//     }
//     else if(n==1){
//         return 1;
//     }
//     else{
//         return(fibonacciSeries(n-1)+fibonacciSeries(n-2));
//     }
//     for(int i=0;i<n;i++){
//         printf("%d ",fibonacciSeries(i));
//     }
// }

#include <stdio.h>

// Function to compute nth Fibonacci number recursively
int fibonacci(int n) {
    if (n == 0) return 0; // Base case
    if (n == 1) return 1; // Base case
    return fibonacci(n - 1) + fibonacci(n - 2); // Recursive call
}

int main() {
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input\n");
        return 0;
    }

    // Loop to print Fibonacci series
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    
    return 0;
}
