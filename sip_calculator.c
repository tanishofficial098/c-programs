#include <stdio.h>
int main(){
    int a , t , i;
    float r , intrest , x;
    printf("hello welcome to the sip calculator by tanish\n\a enter the amount you want to invest per month\n");
    scanf("%d",&a);
    printf("enter the time period you want to invest for in months\n\a");
    scanf("%d",&t);
    printf("enter your expected rate of return in percentage\n\a");
    scanf("%f",&i);
    intrest = (i/12)/100;
    x=((1+intrest)*t-1)/intrest;
    r = a*x*(1+intrest);
    printf("your total investment is %d\n\a",a*t);
    printf("your total returns will be %f\n\a",r);
    printf("your total profit will be %f\n\a",r-(a*t));
    return 0;
}