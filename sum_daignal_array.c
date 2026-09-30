#include <stdio.h>
int main()
{
    int i, j, arr[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
            printf("%d\t", arr[i][j]);
        printf("\n\v");
    }
    int sum = 0;
    for (int a = 0; a < 4; a++)
    {
        for (int b = 0; b < 4; b++)
        {
            if (a == b)
                sum = sum + arr[a][b];
        }
    }
    printf("Sum of the diagonal elements will be: %d\n", sum);
    return 0;
}