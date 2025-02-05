#include <stdio.h>
int main{
    char alp;
    scanf("%d",&alp);
    if(alp>=97 && alp<=122){
        printf("Uppercase");
    }
    else if(alp>=65 && alp<=90){
        printf("Lowercase");
    }
    return 0;
}