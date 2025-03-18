#include<stdio.h>
int pal(int num){
    int originalnum=num;
    int reversednum=0,rem;
    while(num>0){
        rem=num%10;
        reversednum=reversednum*10+rem;
        num/=10;
    }
    if(originalnum==reversednum){
        return 1;
    }
    return 0;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(pal(arr[i])){
            count+=1;
        }
    }
    printf("%d",count);
    return 0;
}