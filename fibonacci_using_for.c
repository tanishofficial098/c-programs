#include <stdio.h>
int main(void)
{
    int n, x = 0, y = 1, sum = 0;
    printf("enter the value of n; ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", sum);
        x = y;
        y = sum;
        sum = x + y;
    }
    return 0;
}