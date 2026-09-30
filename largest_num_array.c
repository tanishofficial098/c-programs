#include <stdio.h>
int main()
{
    int a[10], n, i, l;
    printf("enter how many numbers you want to enter: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("the value of %d is: ", i);
        scanf("%d", &a[i]);
    }
    l = a[0];
    for (i = 1; i < n; i++)
    {
        if (l < a[i])
        {
            l = a[i];
        }
    }
    printf("the largest value of array is: %d\n", l);
    return 0;
}