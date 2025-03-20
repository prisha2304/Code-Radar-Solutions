#include<stdio.h>
int sum(int num){
    int digit,s=0;
    while(num>0){
        digit=num%10;
        s+=digit;
        num/=10;
    }
    return s;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int new[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        new[i]=sum(arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",new[i]);
    }
    return 0;
}