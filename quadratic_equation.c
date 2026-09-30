#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,d;
    double r1,r2;
    mn:
    printf("enter the value of a:\n");
    scanf("%d",&a);
    printf("enter the value of b:\n");
    scanf("%d",&b);
    printf("enter the value of c:\n");
    scanf("%d",&c);
    d=b*b-4*a*c;
    printf("the value of d is %d\n",d);
    if (d>0){
        printf("the 2 root of this quadratic equation are:\n");
    }
    else if (d==0){
        printf("hence the value of d is 0 its 2 roots are:");
    }
    else {
        printf("invalid value \n please try again with valid values");
        goto mn;
    }
    r1=(-b+sqrt(d))/2*a;
    r2=(-b-sqrt(d))/2*a;
    printf("the 2 roots of equation are:\n%lf%lf",r1,r2);
    return 0;
}