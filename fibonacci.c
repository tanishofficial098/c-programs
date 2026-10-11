#include <stdio.h>
int main(void)
{
    static long int n;
    int x = 0, y = 1, sum = 0;
    printf("enter the value of n: ");
    scanf("%ld", &n);
    while (sum <= n)
    {
        printf("%d ", sum);
        x = y;
        y = sum;
        sum = x + y;
    }
    return 0;
}