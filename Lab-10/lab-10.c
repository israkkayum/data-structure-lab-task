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
        printf("\nChoice your suitable option : \n");
        printf("1. enQueue \n2. deQueue \n3. Dispaly \n4. Exit\n");
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

    printf("Enter any data = ");
    scanf("%d", &x);

    if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = x;
    }
    else if (((rear + 1) % MAX) == front)
    {
        printf("Queue is Overflow\n");
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
        printf("Queue is Underflow\n");
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
        printf("Queue is Underflow\n");
    }
    else
    {
        printf("Queue are : ");

        while (i != rear)
        {
            printf("%d ", queue[i]);
            i = (i + 1) % MAX;
        }
        printf("%d", queue[rear]);
    }
}
