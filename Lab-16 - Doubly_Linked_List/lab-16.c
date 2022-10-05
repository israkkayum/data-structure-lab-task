#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int count = 0;

struct node
{
    struct node *prev;
    int ssn;
    long int phno;
    float sal;
    char name[20], dept[10], desg[20];
    struct node *next;
} * h, *temp, *temp1, *temp2, *temp4;

// Function to create node
void create()
{
    int ssn;
    long int phno;
    float sal;
    char name[20], dept[10], desg[20];
    temp = (struct node *)malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->next = NULL;
    printf("\n Enter ssn, name, depart"
           "ment, designation, salary "
           "and phno of employee: ");
    scanf("%d %s %s %s %f %ld",
          &ssn, name, dept, desg,
          &sal, &phno);
    temp->ssn = ssn;
    strcpy(temp->name, name);
    strcpy(temp->dept, dept);
    strcpy(temp->desg, desg);
    temp->sal = sal;
    temp->phno = phno;
    count++;
}

// Function to insert at beginning
void insertbeg()
{
    // If DLL is empty
    if (h == NULL)
    {
        create();
        h = temp;
        temp1 = h;
    }

    // Else create a new node and
    // update the links
    else
    {
        create();
        temp->next = h;
        h->prev = temp;
        h = temp;
    }
}

// Function to insert at end
void insertend()
{
    // If DLL is empty
    if (h == NULL)
    {
        create();
        h = temp;
        temp1 = h;
    }

    // Else create a new node and
    // update the links
    else
    {
        create();
        temp1->next = temp;
        temp->prev = temp1;
        temp1 = temp;
    }
}

// Function to display from beginning
void displaybeg()
{
    temp2 = h;
    if (temp2 == NULL)
    {
        printf("\n list is empty\n");
        return;
    }
    printf("\n Linked list elements from beginning:\n\n");
    while (temp2 != NULL)
    {
        printf(" %d %s %s %s %f %ld\n",
               temp2->ssn, temp2->name,
               temp2->dept, temp2->desg,
               temp2->sal, temp2->phno);
        temp2 = temp2->next;
    }

    // Print the count
    printf("\n Number of employees = %d\n", count);
}

// Function to delete at end
int deleteend()
{
    struct node *temp;
    temp = h;
    if (temp == NULL)
    {
        printf("\n list is empty\n");
        return 0;
    }
    if (temp->next == NULL)
    {
        printf("\n %d %s %s %s %f %ld\n",
               temp->ssn, temp->name,
               temp->dept, temp->desg,
               temp->sal, temp->phno);
        free(temp);
        h = NULL;
    }
    else
    {
        temp = temp1;
        temp2 = temp1->prev;
        temp2->next = NULL;
        printf("\n %d %s %s %s %f %ld\n",
               temp->ssn, temp->name,
               temp->dept, temp->desg,
               temp->sal, temp->phno);
        free(temp);
        temp1 = temp2;
    }
    count--;
    return 0;
}

// Function to delete from beginning
int deletebeg()
{
    struct node *temp;
    temp = h;
    if (temp == NULL)
    {
        printf("\n list is empty\n");
        return 0;
    }
    if (temp->next == NULL)
    {
        printf("\n %d %s %s %s %f %ld\n",
               temp->ssn, temp->name,
               temp->dept, temp->desg,
               temp->sal, temp->phno);
        free(temp);
        h = NULL;
    }
    else
    {
        h = h->next;
        h->prev = NULL;
        printf("\n %d %s %s %s %f %ld\n",
               temp->ssn, temp->name,
               temp->dept, temp->desg,
               temp->sal, temp->phno);
        free(temp);
    }
    count--;
    return 0;
}

// Function displaying menus
void employerDetails()
{
    int ch, n, i;
    h = NULL;
    temp = temp1 = NULL;
    printf("\n-----------Menu------------\n");
    printf("\n 1.Create a DLL of n employee");
    printf("\n 2.Display from front");
    printf("\n 3.Insert at end");
    printf("\n 4.Delete at end");
    printf("\n 5.Insert at front");
    printf("\n 6.Delete at front");
    printf("\n 7.To show DLL as queue");
    printf("\n 8.Exit\n");
    printf("\n----------------------\n");
    while (1)
    {
        printf("\n Enter choice : ");
        scanf("%d", &ch);

        // Switch statements begins
        switch (ch)
        {
        case 1:
            printf("\n Enter number of employees: ");
            scanf("%d", &n);
            for (i = 0; i < n; i++)
            {
                insertend();
            }
            break;
        case 2:
            displaybeg();
            break;
        case 3:
            insertend();
            break;
        case 4:
            deleteend();
            break;
        case 5:
            insertbeg();
            break;
        case 6:
            deletebeg();
            break;
        case 7:
            printf("\n Demo Double Ended Queue Operation\n");

            printf("\n 1:InsertQueueFront\n 2: DeleteQueueFront\n 3:InsertQueueRear\n 4:DeleteQueueRear\n 5:DisplayStatus\n 6: Exit \n");

            break;
        case 8:
            exit(0);
        default:
            printf("wrong choice\n");
        }
    }
}

// Driver Code
int main()
{
    // Function Call
    employerDetails();

    return 0;
}
