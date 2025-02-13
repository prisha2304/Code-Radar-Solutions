#include<stdio.h>
int main(){
    int a,b;
    scanf("%d" "%d",&a,&b);
    int bitval= (a<<b) & 1;
    printf("%d",bitval);
    return 0;
}