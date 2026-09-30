#include <stdio.h>
int main() 
{
    int a,b,c,g;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    printf("enter the third number ");
    scanf("%d",&c);
    g = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    printf("%d is the largest number",g);
    return 0;
}