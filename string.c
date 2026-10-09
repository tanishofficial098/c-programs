#include <stdio.h>
#include <string.h>
int main(void)
{
    int line(void);
    static char str[7];
    printf("enter your name: ");
    for (int i = 0; i < 7; i++)
    {
        scanf("%c", &str[i]);
    }
    printf("\n\v\v");
    line();
    printf("\n");
    for (int j = 0; j < 7; j++)
    {
        printf("%c", str[j]);
    }
    line();
    printf("\n\vlenth of this string is: %zu\v", strlen(str));
    printf("\n");
    return 0;
}
int line(void)
{
    for (int a = 0; a <= 7; a++)
        printf("*");
    return 0;
}