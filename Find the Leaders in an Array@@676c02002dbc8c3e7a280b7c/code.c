#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n],result[n];
    int count=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int maxright=arr[n-1];
    result[count++]=maxright;
    for(int i=n-2;i<=0;i--){
        if(arr[i]>=maxright){
            result[count++]=arr[i];
            maxright=arr[i];
        }
    }
    for(int i=count -1;i>=0;i--){
        printf("%d",result[i]);
    }
    return 0;
}