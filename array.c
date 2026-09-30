#include<stdio.h>
int main(){
    int a[10] , n , i;
    printf(" how many numbers you want to enter: ");
    scanf(" %d",&n);
    printf("enter %d elements",n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    printf("\t%d",a[i]);
    }
    printf("\n");
    return 0;
}