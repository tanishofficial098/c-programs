#include <stdio.h>
int main()
{
    int basic_pay;
    printf("enter the basic pay: ");
    scanf("%d", &basic_pay);

    if (basic_pay > 2000)
    {
        printf("the salary is:%d\n", basic_pay * 4);
    }
    else if (basic_pay < 2000)
    {
        printf("the salary is:%d\n,", basic_pay * 2 + 2000);
    }
    else 
    {
        printf("the salary is: 5000\n");
    }
    return 0;
}