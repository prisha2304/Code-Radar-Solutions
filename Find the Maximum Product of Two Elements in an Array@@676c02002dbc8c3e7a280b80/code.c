#include<stdio.h>
#include<stdlib.h>
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
    int pro;
    for(int i=0;i<n;i++){
         pro=(absarr[n-1]*arr[n-2]);
    }
    printf("%d",pro);
    return 0;
}