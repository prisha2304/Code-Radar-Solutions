#include<stdio.h>
int main{
    char alp;
    scanf("%c",&alp);
    if(alp>='A' && alp<='Z'){
        printf("Uppercase");
    }
    else if(alp>='a' && alp<='z'){
        printf("Lowercase");
    }
    return 0;
}