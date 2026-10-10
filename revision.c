#include <stdio.h>
#include <math.h>
#include <string.h>
short int x;
int printline(void)
{
    for (int i = 1; i <= 10; i++)
    {
        printf("----");
    }
    return 0;
}
int calculator(void)
{
    char operator;
    double num1, num2, result;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);
    printline();

    printf("\nEnter two numbers: ");
    scanf("%lf %lf", &num1, &num2);
    printline();

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("\n%lf + %lf = %lf\n", num1, num2, result);
        break;

    case '-':
        result = num1 - num2;
        printf("\n%lf - %lf = %lf\n", num1, num2, result);
        break;

    case '*':
        result = num1 * num2;
        printf("\n%lf * %lf = %lf\n", num1, num2, result);
        break;

    case '/':
        if (num2 != 0.0)
        {
            result = num1 / num2;
            printf("\n%lf / %lf = %lf\n", num1, num2, result);
        }
        else
        {
            printf("Error: Division by zero is not allowed.\n");
        }
        break;

    default:
        printline();
        printf("Error: Invalid operator entered.\n");
    }

    return 0;
}
int string(void)
{
    int a;

    printf("Enter the number of strings: ");

    if (scanf("%d", &a) != 1 || a <= 0)
    {
        printf("Invalid number.\n");
        return 0;
    }

    char str[a][30];

    for (int i = 0; i < a; i++)
    {
        printf("Enter string %d: ", i + 1);

        if (scanf("%29s", str[i]) != 1)
        {
            printf("Input error.\n");
            return 0;
        }
    }

    printf("\nYour strings are:\n");

    for (int j = 0; j < a; j++)
    {
        printf("%s ", str[j]);
    }
    printf("\n");
    return 0;
}
int main(void)
{
    int printline(void);
    int string(void);
    int calculator(void);
mn:
    printf("1 to operate in string\n2 for calculator\n");
    scanf("%hd", &x);
    switch (x)
    {
    case 1:
        string();
        break;
    case 2:
        calculator();
        break;
    default:
        printf("enter a valid input");
        break;
        goto mn;
    }

    return 0;
}