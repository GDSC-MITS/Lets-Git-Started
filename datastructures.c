// sparse matrix representation in c

#include <stdio.h>
void main()
{
    int a[4][5];
    int size;
    printf("Enter Matrix 1: \n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Matrix 1: \n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (a[i][j] != 0)
            {
                size++;
            }
        }
    }
    int r1[3][size];
    int k;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (a[i][j] != 0)
            {
                r1[0][k] = i;
                r1[1][k] = j;
                r1[2][k] = a[i][j];
                k++;
            }
        }
    }
    printf("Representation of Matrix 1: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }
