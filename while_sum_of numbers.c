#include <stdio.h>
int main()
{
    int a = 1, value, sum = 0 ;
    printf("enter the value \n");
    scanf("%d", &value);
    while (a <= value)
    {sum = sum + value;
    a++;}
    printf("%d\n", sum, value);
    return 0;
}