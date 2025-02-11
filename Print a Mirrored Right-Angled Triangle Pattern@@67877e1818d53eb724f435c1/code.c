#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=n;j<=1;j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}