#include <stdio.h>
int main(){
    char a[100];
    char b[100];
    scanf("%s",&a);
    scanf("%s",&b);
    printf("You entered: ");
    printf("%s", a);
    printf(" and");
    printf("%s", b);
    return 0;
}