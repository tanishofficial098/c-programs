#include<stdio.h>
int main()
{
    int i,a,n,sum=0;
    printf("enter the value of n\n");
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        printf("enter the value %d\n",i);
        scanf("%d",&a);
        if (a>=0){
            sum=sum+a;
            continue;
    }}
    printf("the sum of all positve number is %d\n",sum);
    return 0;
}