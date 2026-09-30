//switch statement
#include <stdio.h>
int main()
{
    char order;
    printf("menu\n 1. Pizza\n 2. Burger\n 3. Pasta\nwhats your order?\n");
    scanf("%d", "&order");
    switch (order)
    {
        case 'p':
            printf("you ordered pizza\n");
            break;
        case 'P':
            printf("you ordered pizza\n");
            break;
        case 'b':
            printf("you ordered burger\n");
            break;
        case 'B':
            printf("you ordered burger\n");
            break;
        
    }

}