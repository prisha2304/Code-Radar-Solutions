#include<stdio.h>
int main(){
    int n,found=0;
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
            return 0;
            found=1;
        }
    }
    if(!found){
        printf("-1");
    }
    return 0;
}