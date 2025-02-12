#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int bits=sizeof(n)*8;
    int MSB=1<<(n-1);
    if(MSB==1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}