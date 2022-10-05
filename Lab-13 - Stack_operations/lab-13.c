#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX 5

int stack[MAX];
int top = -1;

void push();
void pop();
void display();

int main()
{
    int n;

    while (1)
    {
        printf("\n1. Push 2. Pop 3. Dispaly 4. Exit\n");
        printf("\nChoice your suitable option : ");
        scanf("%d", &n);

        switch (n)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
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

// push

void push()
{
    int x;

    printf("\nEnter data : ");
    scanf("%d", &x);

    if (top == MAX - 1)
    {
        printf("\nStack Overflow\n");
    }
    else
    {
        top++;
        stack[top] = x;
    }
}

// POP

void pop()
{
    int item;
    if (top == -1)
    {
        printf("\nStack Underflow\n");
    }
    else
    {
        top--;
    }
}

// display

void display()
{
    int i;

    printf("\nStack data are : ");

    for (i = top; i >= 0; i--)
    {
        printf("%d ", stack[i]);
    }
    printf("\n");
}