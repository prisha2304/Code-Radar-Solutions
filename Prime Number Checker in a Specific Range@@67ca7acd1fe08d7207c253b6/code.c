int isprime(int n){
    if(n<=1){
        return 0;
    }
    for(int i=2; i<n; i++){
        if(n%i==0){
            return 0;
        }
        // else{
        //     return 1;
        // }
    }
    return 1;
}
int main(){
    int start, end;
    scanf("%d",&start);
    scanf("%d",&end);
    for(int j=start; j<=end;j++){
        if(isprime(j)){
            printf("%d ",j);
        }
    }
    return 0;
}