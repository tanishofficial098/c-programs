#include <stdio.h>
static long int a, b;
int main(void)
{
    int avg(void), sum(void), multiply(void);
    printf("enter the value of a and b: \n");
    scanf("%ld%ld", &a, &b);
    sum();
    return 0;
}
int multiply(void)
{
    printf("the result of a*b will be %ld\n", a * b);
    return 0;
}
int avg(void)
{
    printf("the sum of a and b will be %ld\n", (a + b) / 2);
    multiply();
    return 0;
}
int sum(void)
{
    printf("the sum of a and b is %ld\n", a + b);
    avg();
    return 0;
}