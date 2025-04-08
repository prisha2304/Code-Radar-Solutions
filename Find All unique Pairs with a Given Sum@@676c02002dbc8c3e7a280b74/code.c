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
                int alreadyprinted=0;
                for(int p=0;p<i;p++){
                    for(int q=p+1;q<j;q++){
                        if(arr[i]==arr[p] && arr[j]==arr[q]||arr[i]==arr[q] && arr[j]==arr[p]){
                            alreadyprinted=1;
                            break;
                        }
                    }
                
                if(alreadyprinted){
                    break;
                }
                
                if(!alreadyprinted){
            printf("%d %d\n",arr[i],arr[j]);
        }
                }
    }
}
    }
    return 0;
}