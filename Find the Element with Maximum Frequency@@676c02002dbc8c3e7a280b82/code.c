#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int freq[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        freq[i]=-1;
    }
    for(int i=0;i<n;i++){
        if(freq[i]==-1){
            int count=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                freq[j]=0;
            }
        }
        freq[i]=count;
        }
    }
    int max=freq[0],maxele=arr[0];
    for(int i=0;i<n;i++){
        if(freq[i]>max){
            max=freq[i];
            maxele=arr[i];
        }
    }
    printf("%d",maxele);
    return 0;
}