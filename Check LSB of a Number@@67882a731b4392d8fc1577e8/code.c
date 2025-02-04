#include <stdio.h>
int main(){
    int a;
    scanf("%d",a);
    int LSB=a&1;
    if(LSB==1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}