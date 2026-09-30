#include<stdio.h>
int main()
{
    int i,a,n,sum=0;
    printf("enter the value of n:\n");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        printf("enter the %d number\n",i);
        scanf("%d",&a);
        sum=sum+a;
    }
    printf("sum = %d\n",sum);
    return 0;
}