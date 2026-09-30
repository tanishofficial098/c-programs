#include <stdio.h>
int main()
{
    int x=1, z;
    printf("enter the number z: ");
    scanf("%d", &z);

    do
    {
        printf("%d\n", x++);
    }
     while (x<=z);
    return 0;
    
}