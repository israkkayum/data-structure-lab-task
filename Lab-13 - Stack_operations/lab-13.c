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
        printf("\nChoice your suitable option : \n");
        printf("1. Push \n2. Pop \n3. Dispaly \n4. Exit\n");
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

    printf("Enter data : ");
    scanf("%d", &x);

    if (top == MAX - 1)
    {
        printf("Stack Overflow\n");
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
        printf("Stack Underflow\n");
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

    printf("Stack data are : ");

    for (i = top; i >= 0; i--)
    {
        printf("%d ", stack[i]);
    }
}