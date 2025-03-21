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
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==k){
                int alreadyPrinted=0;
                for (int x = 0; x < i; x++) {
                    for (int y = x + 1; y < n; y++) {
                        if ((arr[x] == arr[i] && arr[y] == arr[j]) || (arr[x] == arr[j] && arr[y] == arr[i])) {
                            alreadyPrinted = 1;
                            break;
                        }
                    }
                    if (alreadyPrinted) break;
                }
            if (!alreadyPrinted) {
                    printf("%d %d\n", arr[i], arr[j]);
                }
        }
    }
}
    return 0;
}