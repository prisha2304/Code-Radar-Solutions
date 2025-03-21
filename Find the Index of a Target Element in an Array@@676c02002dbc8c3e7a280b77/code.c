#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            printf("%d",i);
        }
        else if(arr[i]!=k){
            printf("-1");
        }
        else{
            printf("0");
        }
    }
    return 0;
}