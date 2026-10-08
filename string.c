#include <stdio.h>
int main(void)
{
    char str[7];
    for (int i = 0; i < 7; i++)
    {
        scanf("%c", &str[i]);
    }
    printf("\n");
    for (int j = 0; j < 7; j++)
    {
        printf("%c", str[j]);
    }
    printf("\n");
    return 0;
}