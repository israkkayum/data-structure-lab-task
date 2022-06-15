#include <stdio.h>

int main()
{
    int n[100], k, find;

    printf("Declare Array size = ");
    scanf("%d", &k);

    printf("\nAdd element int array = ");
    for (int i = 0; i < k; i++)
    {
        scanf("%d", &n[i]);
    }

    printf("\nWhich element you need = ");
    scanf("%d", &find);

    for (int i = 0; i < k; i++)
    {
        if (n[i] == find)
        {
            printf("\nThe number position in array: %d\n", i);
            return 0;
        }
    }

    printf("\nNot Found\n");

    return 0;
}