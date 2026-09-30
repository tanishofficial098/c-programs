#include<stdio.h>
int main(){
    int a,b;
    printf("enter the value of a:\n");
    scanf("%d",&a);
    printf("enter the value of b:\n");
    scanf("%d",&b);
    int r=(a>b)?a:b;
    printf("the greatest number from %d and %d is %d\n",a,b,r);
    return 0;
}