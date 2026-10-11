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
int ternary(void)
{
    int a, b, c, g;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printline();
    printf("Enter the second number: ");
    scanf("%d", &b);
    printline();
    printf("enter the third number ");
    scanf("%d", &c);
    printline();
    g = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    printf("\n%d is the largest number\n", g);
    printline();
    return 0;
}
int sumarr(void)
{
    int rows, columns;
    printline();
    printf("\nenter the rows and columns you want in array\n\a");
    scanf("%d%d", &rows, &columns);
    int arr[rows][columns];
    printf("enter the elements of array\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
            scanf("%d", &arr[i][j]);
    }
    printf("values are enterd succesfully\n\v");
    printf("the values you enterd are :- \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
            printf("%d\t", arr[i][j]);
        printf("\n\v");
    }
    static int rows2, columns2;
mn:
    printline();
    printf("\nenter the rows and columns you want in array 2\n");
    scanf("%d%d", &rows2, &columns2);
    int arr2[rows2][columns2];
    printf("enter the elements of array 2\n");
    for (int i = 0; i < rows2; i++)
    {
        for (int j = 0; j < columns2; j++)
            scanf("%d", &arr2[i][j]);
    }
    printf("values are enterd succesfully\n\v");
    printf("the values you enterd are :- \n");
    for (int i = 0; i < rows2; i++)
    {
        for (int j = 0; j < columns2; j++)
            printf("%d\t", arr2[i][j]);
        printf("\n\v");
    }
    if (rows2 == rows && columns2 == columns)
    {
        printf("sum of both arrays are :-\n");
        printline();
        printf("\n");
        for (int a = 0; a < rows2; a++)
        {
            for (int b = 0; b < columns2; b++)
                printf("%d\t", arr[a][b] + arr2[a][b]);
            printf("\n\v");
        }
        printline();
        printf("\v");
    }
    else
    {
        printf("please make sure rows and column of both arrays are equal");
        goto mn;
    }
    return 0;
}
int quadratic(void)
{
    int a, b, c, d;
    double r1, r2;
mn:
    printf("\n~enter the value of a:\n");
    scanf("%d", &a);
    printf("enter the value of b:\n");
    scanf("%d", &b);
    printf("enter the value of c:\n");
    scanf("%d", &c);
    d = b * b - 4 * a * c;
    printline();
    printf("\nthe value of d is %d\n", d);
    printline();
    if (d > 0)
    {
        printf("\nthe 2 root of this quadratic equation are:\n");
    }
    else if (d == 0)
    {
        printf("hence the value of d is 0 its 2 roots are:");
    }
    else
    {
        printf("invalid value \n please try again with valid values");
        goto mn;
    }
    if (a == 0)
    {
        printf("invalid value of a (a cannot be 0)\n");
        goto mn;
    }

    r1 = (-b + sqrt((double)d)) / (2.0 * a);
    r2 = (-b - sqrt((double)d)) / (2.0 * a);
    printline();
    printf("\nroot 1: %lf\nroot 2: %lf\n", r1, r2);
    printline();
    printf("\v");
    return 0;
}
int calculator(void)
{
    char operator;
    double num1, num2, result;

    printf("\nEnter an operator (+, -, *, /): ");
    scanf(" %c", &operator);
    printf("\n");
    printline();
    printf("\n");
    printf("\nEnter two numbers: ");
    scanf("%lf %lf", &num1, &num2);
    printf("\n");
    printline();
    printf("\n");
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
        printf("\nError: Invalid operator entered.\n");
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
    int ternary(void);
    int quadratic(void);
    int sumarr(void);
mn:
    printline();
    printf("\n1 to operate in string\n2 for calculator\n3 to find greatest number\n4 to find quadratic equation\n5 to sum 2 * 2d array\n");
    scanf("%hd", &x);
    printf("\n");
    printline();
    switch (x)
    {
    case 1:
        string();
        break;
    case 2:
        calculator();
        break;
    case 3:
        ternary();
        break;
    case 4:
        quadratic();
        break;
    case 5:
        sumarr();
        break;
    default:
        printf("enter a valid input\n");
        goto mn;
    }

    return 0;
}