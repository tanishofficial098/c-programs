#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter the value of number 1\n");
    scanf("%d", &a);
    printf("enter the value of number 2\n");
    scanf("%d", &b);
    printf("1 for sum\n2 for substraction\n");
    scanf("%d", &c);
    switch (c)
    {
    case 1:
        printf("addition of both numbers will be: %d\n", a + b);
        break;

    case 2:
        printf("substraction of both numbers will be: %d\n", a - b);
        break;
    }
    return 0;
}