#include <stdio.h>
int main()
{
    int rows, columns;
    printf("enter the rows and columns you want in array\n\a");
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
        printf("\n\v");
    }
mn:
    int rows2, columns2;
    printf("enter the rows and columns you want in array 2\n");
    scanf("%d%d", &rows2, &columns2);
    int arr2[rows2][columns2];
    printf("enter the elements of array 2\n");
    for (int i = 0; i < rows2; i++)
    {
        for (int j = 0; j < columns2; j++)
            scanf("%d", &arr2[i][j]);
    }
    printf("values are enterd succesfully\n\v");
    printf("the values you enterd are :- \n");
    for (int i = 0; i < rows2; i++)
    {
        for (int j = 0; j < columns2; j++)
            printf("%d\t", arr2[i][j]);
        printf("\n\v");
    }
    if (rows2 == rows && columns2 == columns)
    {
        printf("sum of both arrays are :-\n");
        for (int a = 0; a < rows2; a++)
        {
            for (int b = 0; b < columns2; b++)
                printf("%d\t", arr2[a][b] + arr2[a][b]);
            printf("\n\v");
        }
    }
    else
    {
        printf("please make sure rows and column of both arrays are equal");
        goto mn;
    }
    return 0;
}