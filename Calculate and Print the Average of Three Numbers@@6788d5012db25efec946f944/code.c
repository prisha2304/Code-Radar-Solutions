#include <stdio.h>
int main(){
    int a;
    int b;
    int c;
    int sum;
    float avg;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    sum=a+b+c;
    avg=(float)sum/3;
    printf("Average: %.2f",avg);
    return 0;
}