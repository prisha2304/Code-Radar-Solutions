#include <stdio.h>
int main(){
    char a[100];
    char b[100];
    fgets(a,sizeof(a),stdin);
    fgets(b,sizeof(b),stdin);
    printf("You entered: %s",a);
    printf("and");
    printf("%s",b);
    return 0;
}