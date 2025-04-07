#include<stdio.h>
int factorialRange(start,end){
    int fact=1;
    for(int i=start;i<=end;i++){
        fact*=i;
        printf("%d",fact);
    }
}