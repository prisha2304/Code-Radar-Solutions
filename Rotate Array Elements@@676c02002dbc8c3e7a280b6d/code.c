#include<stdio.h>
void reverse(arr[],int start,int end){
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }    
}
void rotate(arr[],int n, int k){
    int reverse(arr,0,n-1);
    int reverse(arr,0;k-1);
    int reverse(arr,k,n-1);
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    rotate(arr,n,k);
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}