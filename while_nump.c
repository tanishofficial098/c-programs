#include <stdio.h>
int main()
{
    int a = 1, value;
    printf("enter the value \n");
    scanf("%d", &value);
    while (a <= value)
    {
        printf("%d\n", a++);
    }
    return 0;
}
