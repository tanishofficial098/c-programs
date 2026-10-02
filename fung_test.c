#include <stdio.h>
int main(void)
{
    int add(void), sub(void), mul(void), div(void);
    int n;
mn:
    printf("enter your operation\n");
    printf("\v1 for addition\n2 for substraction\n3 for multiplacation\n4 for division\n: ");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        add();
        break;
    case 2:
        sub();
        break;
    case 3:
        mul();
        break;
    case 4:
        div();
        break;
    default:
    {
        printf("please enter a valid operation\n");
        goto mn;
    }
    }
    return 0;
}
int add(void)
{
    int a, b;
    printf("number 1: ");
    scanf("%d", &a);
    printf("number 2: ");
    scanf("%d", &b);
    printf("sum = %d\n", a + b);
    return 0;
}
int sub(void)
{
    int a, b;
    printf("number 1: ");
    scanf("%d", &a);
    printf("number 2: ");
    scanf("%d", &b);
    printf("substraction = %d\n", a - b);
    return 0;
}
int mul(void)
{
    long int a, b;
    printf("number 1: ");
    scanf("%ld", &a);
    printf("number 2: ");
    scanf("%ld", &b);
    printf("multiplacation = %ld\n", a * b);
    return 0;
}
int div(void)
{
    float a, b;
    printf("number 1: ");
    scanf("%f", &a);
    printf("number 2: ");
    scanf("%f", &b);
    printf("division = %f\n", a / b);
    return 0;
}