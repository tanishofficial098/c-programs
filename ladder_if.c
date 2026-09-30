#include <stdio.h>
int main()
{
    int a,b,r;
    printf("enter value of a and b");
    scanf("%d%d",&a,&b);
    printf("enter the operation you want\n1=+\n2=-\n3=*\n4=/\n");
    scanf("%d",&r);
        if (r==1)
        printf("%d" , a+b);
     
            else if (r==2)
            printf("%d" , a-b);
     
                else if (r==3)
                printf("%d" , a*b);
     
                    else 
                    printf("%d" , a/b);
     return 0;

}