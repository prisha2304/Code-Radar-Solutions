#include<stdio.h>
int main(){
    int arr[7]={1,2,3,4,5,6,2};
    for(int i=0;i<6;i++){
        for(int j=i+1;j<7;j++){
            if(arr[i]==arr[j]){
                printf(%d,j);
            }
        }
    }
    return 0;
} 