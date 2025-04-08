#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);     
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    int pro1=arr[n-1]*arr[n-2];
    int pro2=arr[0]*arr[1];
    if(pro1>pro2){
        printf("%d",pro1);
    }
    else{
        printf("%d",pro2);
    }
    return 0;
}