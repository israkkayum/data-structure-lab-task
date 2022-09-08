#include <stdio.h>
#include <stdbool.h>
#define SIZE 5

int i, list[SIZE], item, existIndex, notFound = 0;

bool isExist(int b)
{
    for (i = 0; i < SIZE; i++)
    {
        if (list[i] == item)
        {
            existIndex = i;
            return true;
        }
    }
    if (i == 10)
    {
        printf("\nItem does not exist\n\n");
        notFound = 1;
        return false;
    }
}

void deleteItem(int a)
{
    if (isExist(a))
    {
        list[existIndex] = NULL;
    }
}

int main()
{
    printf("\nEnter %d integers of the list: ", SIZE);
    for (i = 0; i < SIZE; i++)
    {
        scanf("%d", &list[i]);
    }
    printf("\nEnter which item you want to delete: ");
    scanf("%d", &item);
    deleteItem(item);

    if (!notFound)
    {
        printf("\nList after delete item: ");
        for (i = 0; i < SIZE; i++)
        {
            printf("%d ", list[i]);
        }
        printf("\n\n");
    }

    return 0;
}