int main(){
    int n;
    scanf("%d",&n);
    int arr[100]={};
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int ispalin=1;
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[n-i-1]){
            ispalin=0;
        }
    }
    if(ispalin){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}