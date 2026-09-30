#include<stdio.h>
int main(){
    int num1,num2,quontent,remainder;
    printf("enter the value of number 1 and 2:\n");
    scanf("%d",&num1);
    scanf("%d",&num2);
    quontent=num1/num2;
    remainder=num1%num2;
    printf("the quotent of %d and %d is %d\n",num1,num2,quontent);
    printf("the remainder of %d and %d is %d\n",num1,num2,remainder);
    return 0;
}