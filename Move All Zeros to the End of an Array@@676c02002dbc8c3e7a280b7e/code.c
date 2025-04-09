#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    int new[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int index=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            new[index++]=arr[i];
        }
    }
while(index<n){
    new[index++]=0;
}
for(int i=0;i<n;i++){
    printf("%d ",new[i]);
}
return 0;
}