#include <stdio.h>
int main()
{
    int a[10], n;
    printf("enter the value of n: ");
    scanf("%d", &n);
    printf("enter the value of array \n");
    for (int i = 0; i < n; i++)
    {
        printf("enter the %d value : ", i);
        scanf("%d", &a[i]);
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        printf("\nthe updated values of array %d is %d", i, a[i]);
        sum = sum + a[i];
    }
    printf(" \n\n");
    printf("the sum of all values of a = %d\n", sum);
    printf(" \n");
    return 0;
}