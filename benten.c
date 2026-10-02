#include <stdio.h>
int main(void)
{
    int n;
    printf("enter the value of n: ");
    scanf("%d", &n);
    for (int a = 0; a <= n; a++)
    {
        printf("\n");
        for (int b = 1; b <= a; b++)
        {
            printf(" ");
        }
        for (int c = n; c <= (2 * n - a); c++)
        {
            printf("*");
        }
        for (int d = n; d <= (2 * n - a); d++)
        {
            printf("*");
        }
    }
    for (int i = 1; i <= n; i++)
    {
        printf("\n");
        for (int k = n; k >= i; k--)
        {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }
    }
    printf("\n");
    return 0;
}