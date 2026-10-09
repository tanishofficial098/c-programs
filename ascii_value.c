#include <stdio.h>
int main(void)
{
    int c;
    printf("enter the number\n");
    scanf("%d", &c);
    printf("the ascii number %d represents %c\n ", c, c);
    return 0;
}