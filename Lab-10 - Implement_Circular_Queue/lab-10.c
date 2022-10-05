#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

void enQueue();
void deQueue();
void displayQueue();

int main()
{
    int n;

    while (1)
    {
        printf("\n1. enQueue 2. deQueue 3. Dispaly 4. Exit\n");
        printf("\nChoice your suitable option : ");
        scanf("%d", &n);

        switch (n)
        {
        case 1:
            enQueue();
            break;
        case 2:
            deQueue();
            break;
        case 3:
            displayQueue();
            break;
        case 4:
            printf("\n");
            exit(0);
            break;

        default:
            break;
        }
    }

    return 0;
}

// Insert circular queue data

void enQueue()
{
    int x;

    printf("\nEnter any data = ");
    scanf("%d", &x);

    if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = x;
    }
    else if (((rear + 1) % MAX) == front)
    {
        printf("\nQueue is Overflow\n");
    }
    else
    {
        rear = (rear + 1) % MAX;
        queue[rear] = x;
    }
}

// delete circular queue data

void deQueue()
{
    if (front == -1 && rear == -1)
    {
        printf("\nQueue is Underflow\n");
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front = (front + 1) % MAX;
    }
}

// display circular queue data

void displayQueue()
{
    int i = front;

    if (front == -1 && rear == -1)
    {
        printf("\nQueue is Underflow\n");
    }
    else
    {
        printf("\nQueue are : ");

        while (i != rear)
        {
            printf("%d ", queue[i]);
            i = (i + 1) % MAX;
        }
        printf("%d\n", queue[rear]);
    }
}
