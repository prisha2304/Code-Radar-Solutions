#include <stdio.h>
int main(){
    int n;
    int isprime=1;
    scanf("%d",&n);
    if(n<=1){
        printf("Not Prime");
    }
    else{
    for(int i=2;i<n;i++){
        if (n%i==0){
            isprime=0;
            break;
        }
        else{
            isprime=1;
        }
    }
    }
    if(isprime=0){
        printf("Not Prime");
    }
    else{
        printf("Prime");
    }
    return 0;
}