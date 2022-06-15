#include <stdio.h>

int main()
{
    int n;
    int arr[100];
    int max_value = arr[0];
    int max_index;

    printf("Enter the Array Size: ");
    scanf("%d", &n);

    printf("Enter Array Element: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (max_value < arr[i])
        {
            max_value = arr[i];
            max_index = i;
        }
    }

    printf("%d is the largest value which index is %d\n", max_value, max_index);
}