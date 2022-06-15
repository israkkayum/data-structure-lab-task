#include <stdio.h>

int main()
{
    int arra[100];
    int n;

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
}