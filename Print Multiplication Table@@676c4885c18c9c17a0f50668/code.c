#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1; i<=10; i++){
        int pro=i*n;
        printf("%d * %d = %d\n",n,i,pro);
    }
    
    return 0;
}