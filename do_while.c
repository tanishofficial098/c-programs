#include <stdio.h>
int main()
{
    int a = 1 , r;
    printf("enter the number\n");
    scanf("%d",&r);
    do
    {
        printf("%d\n", a++);
    }
        while (a <= r);
    
    return 0;
}
