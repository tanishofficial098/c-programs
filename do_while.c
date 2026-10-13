#include <stdio.h>
int main(void)
{
    int a = 1, r;
    printf("enter the number\n");
    scanf("%d", &r);
    do
    {
        printf("%d ", a++);
    } while (a <= r);
    printf("\n\v");
    return 0;
}
