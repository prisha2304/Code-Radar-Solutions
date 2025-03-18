#include<stdio.h>
int main(){
        int arr[100]={}; 
        int n;
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        int counto=0;
        int counte=0;
        for(int i=0;i<n;i++){
            int odd=arr[i];
            if(odd%2!=0){
                counto+=1;
            }
            else{
                counte+=1;
            }
        }
        printf("%d %d",counto,counte);
        return 0;
    }