#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);}
    int max=arr[0];
    int foundeven=1;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            if(foundeven){
                if(arr[i]>max){
                max=arr[i];
            }
            else{
                foundeven=-1;
            }
           
        }
    }
    }
    if(foundeven){
        printf("%d",max);
    }
    else{
        printf("%d",foundeven);
    }
    return 0;
}