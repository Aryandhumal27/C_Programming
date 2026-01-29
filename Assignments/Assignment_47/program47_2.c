/*
    Consider Singly Linear Linked List 

    2. Count Digits of Each Node

    void CountDigits(PNODE first);
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

        *first = (*first)->next;
        free(temp);
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
    int iCnt = 0;
    int iCount = Count(*first);

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

    int iCnt = 0;
    int iCount = Count(*first);

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

void DisplayReverse(PNODE first)
{
    if(first == NULL)
    {
        return;
    }

    DisplayReverse(first->next);
    printf(" | %d | <- ", first->data); 
}

void CountDigits(PNODE first)
{
    int No = 0;
    
    while(first != NULL)
    {
        int iCount = 0;
        No = first->data;

        while(No != 0)
        {
            No = No / 10;
            iCount++;
        }

        printf("DigitCount of Node | %d | is : %d\n", first->data, iCount);

        first = first->next;
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
    printf("Total elements in linked list is : %d\n", iRet);

    InsertLast(&head, 101);
    InsertLast(&head, 111);
    InsertLast(&head, 121);

    Display(head);
    iRet = Count(head);
    printf("Total elements in linked list is : %d\n", iRet);

    DeleteFirst(&head);

    Display(head);
    iRet = Count(head);
    printf("Total elements in linked list is : %d\n", iRet);

    DeleteLast(&head);

    Display(head);
    iRet = Count(head);
    printf("Total elements in linked list is : %d\n", iRet);

    InsertAtPos(&head, 105, 4);

    Display(head);
    iRet = Count(head);
    printf("Total elements in linked list is : %d\n", iRet);

    DeleteAtPos(&head, 4);

    Display(head);
    iRet = Count(head);
    printf("Total elements in linked list is : %d\n", iRet);

    printf("Reverse linked list is : \n");
    DisplayReverse(head);
    printf("\n");

    Display(head);
    iRet = Count(head);
    printf("Total elements in linked list is : %d\n", iRet);

    CountDigits(head);

    return 0;
}