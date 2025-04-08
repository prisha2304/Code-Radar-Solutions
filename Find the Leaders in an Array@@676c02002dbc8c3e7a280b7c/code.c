#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int new[n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>=arr[j+1]){
               new[j];
            }
        }
    }
    printf("%d",new[j]);
    return 0;
}