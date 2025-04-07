#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    int mindiff= abs(arr[1]-arr[0]);
    int a=arr[0], b=arr[1];
    for(int i=1;i<n-1;i++){
        int diff =abs(arr[i+1]-arr[i]);
        if(diff<mindiff){
            mindiff=diff;
            a=arr[i];
            b=arr[i+1];
        }
    }
    printf("%d %d",a,b);
    return 0;
}