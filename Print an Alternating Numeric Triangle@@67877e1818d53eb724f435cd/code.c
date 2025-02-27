#include<stdio.h>
int main(){
    int n,start;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2==0){
            start=0;}
            else{
                start=1;
            }
        }
        for(int j=1;j<=i;j++){
            printf("%d ",start);
            start=1-start;
        }
        printf("\n");
    }
    return 0;
}