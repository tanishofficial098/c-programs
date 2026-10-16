#include <stdio.h>
int main(void)
{
    int n;
    printf("Define the length of your string: ");
    scanf("%d", &n);
    char str[n + 1];
    printf("Enter your string: ");
    scanf("%s", str);
    printf("Your string is: %s\n", str);
    int len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    printf("The length of your string is %d\n", len);
    return 0;
}