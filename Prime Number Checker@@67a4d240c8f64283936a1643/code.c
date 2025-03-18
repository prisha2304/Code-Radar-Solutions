#include<stdio.h>
int isPrime(int num) {
    int isprime;
    for (int i = 0; i < num; i++) {
        scanf("%d", &num);  
        if (num <= 1) {
            printf("0\n");
            continue;
        }
        isprime = 1;
        for (int j = 2; j <= num/2; j++) { 
            if (num % j == 0) {
                isprime = 0; 
                break;
            }
        }
    }
    return isprime;
}
