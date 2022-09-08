#include <stdlib.h>
#include <string.h>
#include <stdio.h>
struct Student
{
    int regId;
    char name[100];
    char studyCenter[100];
    char sem[100];
    char phone[100];
    struct Student *next;

} * head;

void insert(int regId, char *name, char *studyCenter, char *sem, char *phone)
{

    struct Student *student = (struct Student *)malloc(sizeof(struct Student));
    student->regId = regId;
    strcpy(student->name, name);
    strcpy(student->studyCenter, studyCenter);
    strcpy(student->sem, sem);
    strcpy(student->phone, phone);
    student->next = NULL;

    if (head == NULL)
    {
        // if head is NULL
        // set student as the new head
        head = student;
    }
    else
    {
        // if list is not empty
        // insert student in beginning of head
        student->next = head;
        head = student;
    }
}

void search(int regId)
{
    struct Student *temp = head;
    while (temp != NULL)
    {
        if (temp->regId == regId)
        {
            printf("\n%d %s %s %s %s\n", temp->regId, temp->name, temp->studyCenter, temp->sem, temp->phone);
            return;
        }
        temp = temp->next;
    }
    printf("\nStudent with Registration Id %d is not found !!!\n", regId);
}

void update(int regId)
{

    struct Student *temp = head;
    while (temp != NULL)
    {

        if (temp->regId == regId)
        {
            printf("\nRecord with Registration %d Found !!!\n", regId);
            printf("\nEnter new Name, Study center, Semester, Phone number: ");
            scanf("%s%s%s%s", temp->name, temp->studyCenter, temp->sem, temp->phone);
            printf("\nUpdation Successful!!!\n");
            return;
        }
        temp = temp->next;
    }
    printf("\nStudent with Registration Id %d is not found !!!\n", regId);
}

void Delete(int regId)
{
    struct Student *temp1 = head;
    struct Student *temp2 = head;
    while (temp1 != NULL)
    {

        if (temp1->regId == regId)
        {

            printf("\nRecord with Registration Id %d Found !!!\n", regId);

            if (temp1 == temp2)
            {
                // this condition will run if
                // the record that we need to delete is the first node
                // of the linked list
                head = head->next;
                free(temp1);
            }
            else
            {
                // temp1 is the node we need to delete
                // temp2 is the node previous to temp1
                temp2->next = temp1->next;
                free(temp1);
            }

            printf("\nRecord Successfully Deleted !!!\n");
            return;
        }
        temp2 = temp1;
        temp1 = temp1->next;
    }
    printf("\nStudent with Registration Id %d is not found !!!\n", regId);
}
void display()
{
    struct Student *temp = head;
    while (temp != NULL)
    {

        printf("\n%d %s %s %s %s\n", temp->regId, temp->name, temp->studyCenter, temp->sem, temp->phone);
        temp = temp->next;
    }
}

int main()
{
    head = NULL;
    int choice;
    char name[100];
    char studyCenter[100];
    char sem[100];
    char phone[100];
    int regId;
    printf("\n------------Menu------------\n");
    printf("\n 1. Insert student details\n 2. Search for student details\n 3. Delete student details\n 4. Update student details\n 5. Display all student details\n 6. Exit\n");
    do
    {
        printf("\nEnter Choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter Registration Id, Name, Study center, Semester, Phone number : ");
            scanf("%d%s%s%s%s", &regId, name, studyCenter, sem, phone);

            insert(regId, name, studyCenter, sem, phone);

            break;

        case 2:
            printf("\nEnter Registration Id to search: ");
            scanf("%d", &regId);
            search(regId);
            break;

        case 3:
            printf("\nEnter Registration Id to delete: ");
            scanf("%d", &regId);
            Delete(regId);
            break;
        case 4:
            printf("\nEnter Registration Id to update: ");
            scanf("%d", &regId);
            update(regId);
            break;

        case 5:
            display();
            break;

        case 6:
            exit(0);
        }

    } while (choice != 0);
}