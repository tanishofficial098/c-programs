#include <stdio.h>
int main(void)
{
    int printline(void);
    printline();
    printf("  tanish\n");
    printline();
    return 0;
}
int printline(void)
{
    int x;
    for (x = 0; x < 10; x++)
    {
        printf("-");
    }
    printf("\n");
    return 0;
}