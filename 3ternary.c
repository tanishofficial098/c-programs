#include<stdio.h>
int main(){
    int a,b,c,r;
    printf("entr the value of a , b and c\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    r=(a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("the greatest number from a b and c is %d\n",r);
    return 0;
}