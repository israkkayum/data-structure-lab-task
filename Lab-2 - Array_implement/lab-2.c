#include <stdio.h>

int main()
{
    int arra[100];
    int n, p;

    printf("\nEnter Array Size = ");
    scanf("%d", &n);

    printf("\nEnter Array Element = ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arra[i]);
    }

    printf("\nDisplay Array Element = ");

    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arra[i]);
    }

    printf("\nEnter the Position (Index) of Delete Element: ");
    scanf("%d", &p);

    if (p > n - 1)
    {
        printf("Invalid Input");
    }
    else
    {
        for (int i = p; i < n - 1; i++)
        {
            arra[i] = arra[i + 1];
        }
        n = n - 1;
    }

    printf("\nDisplay Modify Element = ");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arra[i]);
    }
}