#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int bits=sizeof(n)*8;
    int MSB=1<<(bits-1);
    if(n&MSB){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}