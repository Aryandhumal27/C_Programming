/*
    Consider Singly Linear Linked List to solve problem.

    1. Replace Negative Numbers with Absolute Value

    void MakeAbsolute(PPNODE head)
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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

    if((*first) == NULL)
    {
        *first = newn;
    }
    else
    {
        newn->next = *first;
        *first = newn;
    }
}

void InsertLast(PPNODE first, int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if((*first) == NULL)
    {
        *first = newn;
    }
    else if(((*first)->next) == NULL)
    {
        (*first)->next = newn;
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

void InsertAtPos(PPNODE first, int no ,int pos)
{
    int i = 0;
    int iCount = Count(*first);
    PNODE newn = NULL;
    PNODE temp = NULL;

    if(pos < 1 && pos > (iCount + 1))
    {
        printf("Invalid position\n");
        return;
    }

    if(pos == 1)
    {
        InsertFirst(first, no);
    }
    else if(pos == iCount + 1)
    {
        InsertLast(first, no);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = no;
        newn->next = NULL;

        temp = *first;

        for(i = 0; i < (pos - 1); i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;
    }
}

void DeleteAtPos(PPNODE first, int pos)
{
    int i = 0;
    int iCount = Count(*first);
    PNODE temp = NULL;
    PNODE target = NULL;

    if(pos < 1 && pos > (iCount))
    {
        printf("Invalid position\n");
        return;
    }

    if(pos == 1)
    {
        DeleteFirst(first);
    }
    else if(pos == iCount)
    {
        DeleteLast(first);
    }
    else
    {
        temp = *first;

        for(i = 0; i < (pos - 1); i++)
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

int Max(PNODE first)
{
    int Max = first->data;

    while(first != NULL)
    {
        if(first->data > Max)
        {
            Max = first->data;
        }

        first = first->next;
    }

    return Max;
}

int Min(PNODE first)
{
    int Min = first->data;

    while(first != NULL)
    {
        if(first->data < Min)
        {
            Min = first->data;
        }

        first = first->next;
    }

    return Min;
}

int Difference(PNODE first)
{
    int Difference = 0;

    Difference = Max(first) - Min(first);

    return Difference;
}

bool CheckAllPositive(PNODE first)
{
    bool bFlag = true;

    while(first != NULL)
    {
        if(first->data < 0)
        {
            bFlag = false;
            break;
        }

        first = first->next;
    }

    return bFlag;
}

void DisplayDivByThree(PNODE first)
{
    while(first != NULL)
    {
        if((first->data) % 3 == 0)
        {
            printf("| %d |\t", first->data);
        }

        first = first->next;
    }

    printf("\n");
}

int CountDivByFive(PNODE first)
{
    int iCount = 0;

    while(first != NULL)
    {
        if((first->data) % 5 == 0)
        {
            iCount++;
        }

        first = first->next;
    }

    return iCount;
}

int CountTwoDigit(PNODE first)
{
    int iCount = 0;
    while(first != NULL)
    {
        int DigitCount = 0;
        while(first->data != 0)
        {
            DigitCount++;
            first->data = first->data / 10;
        }

        if(DigitCount == 2)
        {
            iCount++;
        }

        first = first->next;
    }

    return iCount;
}

void MakeAbsolute(PPNODE first)
{
    PNODE temp = *first;

    while(temp != NULL)
    {
        if(temp->data < 0)
        {
            temp->data = -(temp->data);
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
    InsertFirst(&head, -51);

    Display(head);
    iRet = Count(head);
    printf("Total Count of elements in linked list are : %d\n", iRet);

    InsertLast(&head, -101);
    InsertLast(&head, -121);
    InsertLast(&head, 151);

    Display(head);
    iRet = Count(head);
    printf("Total Count of elements in linked list are : %d\n", iRet);

    DeleteFirst(&head);

    Display(head);
    iRet = Count(head);
    printf("Total Count of elements in linked list are : %d\n", iRet);

    DeleteLast(&head);

    Display(head);
    iRet = Count(head);
    printf("Total Count of elements in linked list are : %d\n", iRet);

    InsertAtPos(&head, 105, 3);

    Display(head);
    iRet = Count(head);
    printf("Total Count of elements in linked list are : %d\n", iRet);

    DeleteAtPos(&head, 3);

    Display(head);
    iRet = Count(head);
    printf("Total Count of elements in linked list are : %d\n", iRet);

    MakeAbsolute(&head);

    Display(head);
    iRet = Count(head);
    printf("Total Count of elements in linked list are : %d\n", iRet);
    
    return 0;
}