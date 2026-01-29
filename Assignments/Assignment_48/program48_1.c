/*
    Conisder Singly Linear linked list

    1. Replace Even Numbers with 0

    void ReplaceEven(PPNODE first);
*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE first, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    newn->next = *first;
    *first = newn;
}

void InsertLast(PPNODE first, int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        temp = *first;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newn;
    }
}

void DeleteFirst(PPNODE first)
{
    PNODE target = NULL;

    if(*first == NULL)
    {
        return;
    }
    else if((*first)->next == NULL)
    {
        free(*first);
        *first = NULL;
    }
    else
    {
        target = *first;

        *first = (*first)->next;
        free(target);
    }
}

void DeleteLast(PPNODE first)
{
    PNODE temp = NULL;

    if(*first == NULL)
    {
        return;
    }
    else if((*first)->next == NULL)
    {
        free(*first);
        *first = NULL;
    }
    else
    {
        temp = *first;

        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }

        free(temp->next);
        temp->next = NULL;
    }
}

int Count(PNODE first)
{
    int iCount = 0;

    while(first != NULL)
    {
        iCount++;
        first = first->next;
    }

    return iCount;
}

void InsertAtPos(PPNODE first, int no, int pos)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    int iCount = 0;
    int iCnt = 0;

    iCount = Count(*first);

    if(pos == 1)
    {
        InsertFirst(first, no);
    }
    else if(pos == (iCount + 1))
    {
        InsertLast(first, no);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = no;
        newn->next = NULL;

        temp = *first;

        for(iCnt = 1; iCnt < (pos - 1); iCnt++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;
    }
}

void DeleteAtPos(PPNODE first, int pos)
{
    PNODE temp = NULL;
    PNODE target = NULL;
    int iCount = 0;
    int iCnt = 0;

    iCount = Count(*first);

    if(pos == 1)
    {
        DeleteFirst(first);
    }
    else if(pos == (iCount))
    {
        DeleteLast(first);
    }
    else
    {
        temp = *first;

        for(iCnt = 1; iCnt < (pos - 1); iCnt++)
        {
            temp = temp->next;
        }

        target = temp->next;

        temp->next = temp->next->next;
        free(target);
    }
}


void Display(PNODE first)
{
    while(first != NULL)
    {
        printf(" | %d | -> ", first->data);
        first = first->next;
    }

    printf("NULL\n");
}

void ReplaceEven(PPNODE first)
{
    PNODE temp = NULL;

    temp = *first;

    while(temp != NULL)
    {
        if((temp->data % 2) == 0)
        {
            temp->data = 0;
        }

        temp = temp->next;
    }
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head, 11);
    InsertFirst(&head, 21);
    InsertFirst(&head, 51);

    Display(head);
    iRet = Count(head);
    printf("Number of element in linked list are : %d\n", iRet);

    InsertLast(&head, 101);
    InsertLast(&head, 111);
    InsertLast(&head, 121);

    Display(head);
    iRet = Count(head);
    printf("Number of element in linked list are : %d\n", iRet);

    DeleteFirst(&head);

    Display(head);
    iRet = Count(head);
    printf("Number of element in linked list are : %d\n", iRet);

    DeleteLast(&head);

    Display(head);
    iRet = Count(head);
    printf("Number of element in linked list are : %d\n", iRet);

    InsertAtPos(&head, 105, 4);

    Display(head);
    iRet = Count(head);
    printf("Number of element in linked list are : %d\n", iRet);

    DeleteAtPos(&head, 4);

    Display(head);
    iRet = Count(head);
    printf("Number of element in linked list are : %d\n", iRet);

    InsertLast(&head, 22);
    InsertLast(&head, 24);
    InsertLast(&head, 26);

    Display(head);
    iRet = Count(head);
    printf("Number of element in linked list are : %d\n", iRet);

    ReplaceEven(&head);

    Display(head);
    iRet = Count(head);
    printf("Number of element in linked list are : %d\n", iRet);



    return 0;
}