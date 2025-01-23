#include <stdio.h>
int main(){
    char a[100];
    fgets(a,sizeof(a),stdin);
    printf("You entered: %s",a);
    return 0;
}