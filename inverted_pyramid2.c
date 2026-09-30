#include <stdio.h>
int main()
{
    int t, n, m=1;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    t=n;
    for (int i=1;i<=n;i++){ 
         m=m+1;
    printf("\n");
    for(int k= 1; k <= i; k++)
        {
            printf(" ");
        }
    for (int j=t; j >= m; j--)
    {
        printf(" *");
        
    }}
    printf("\n");
    return 0;
}