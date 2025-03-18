#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int num, isprime;
    for (int i = 0; i < n; i++) {
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

        printf("%d\n", isprime);
    }
    return 0;
}
