#include<stdio.h>
int main(){
    int a,b,c;
    float average;
    printf("enter the value of a:\n");
    scanf("%d",&a);
    printf("enter the value of b:\n");
    scanf("%d",&b);
    printf("enter the value of c:\n");
    scanf("%d",&c);
    average=(a+b+c)/3;
    printf("the average of a , b and c is \n%f\n",average);
    return 0;
}