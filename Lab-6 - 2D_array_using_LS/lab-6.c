#include <stdio.h>

int main()
{
    int arr[100][100], k, find;

    printf("\nDeclare Array Size = ");
    scanf("%d", &k);

    printf("\nDeclaration Array Element = ");
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < k; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nWhich element you need = ");
    scanf("%d", &find);

    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < k; j++)
        {
            if (arr[i][j] == find)
            {
                printf("\nRow = %d, Col = %d\n\n", i, j);
                return 0;
            }
        }
    }

    printf("\nNot Found\n");

    return 0;
}