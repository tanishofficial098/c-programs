#include <stdio.h>
int main()
{
    int rows, columns;
    printf("enter the rows and columns you want in array\n");
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
        printf("\n");
    }
    return 0;
}