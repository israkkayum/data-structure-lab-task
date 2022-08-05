#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define SIZE 10

void enQueue();
void deQueue();
void display();

int items[SIZE], front = -1, rear = -1, value;

int main()
{
    char s;

    while (1)
    {
        printf("\nChoice your suitable option: \n");
        printf("A. Enqueue \nB. Dequeue \nC. Display \nD. Exit\n");

        s = toupper(getchar());

        switch (s)
        {
        case 'A':
            enQueue();
            break;

        case 'B':
            deQueue();
            break;

        case 'C':
            display();
            break;

        case 'D':
            exit(0);
            break;

        default:
            printf("Invalid Input!!");
            break;
        }
        getchar();
    }
}

void enQueue()
{
    if (rear == SIZE - 1)
    {
        printf("\nSorry!! Queue is Full.");
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }
        rear++;

        printf("\nEnter the value = ");
        scanf("%d", &value);

        items[rear] = value;
    }
}

void deQueue()
{
    if (front == -1)
    {
        printf("\nSorry!! Queue is Empty.");
    }
    else
    {
        printf("\nDeleted Item : %d", items[front]);
        front++;

        if (front > rear)
        {
            front = rear = -1;
        }
    }
}

void display()
{
    if (rear == -1)
    {
        printf("\nQueue is Empty!!");
    }
    else
    {
        printf("\nQueue element are: ");

        for (int i = front; i <= rear; i++)
        {
            printf("%d ", items[i]);
        }
    }
}