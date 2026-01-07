/*
    Consider Singly Linked list

    5. Increment Each Node Value by 1

    Increase ech element by 1.

    void IncrementAll(PPNODE first);
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
typedef struct node* PNODE;
typedef struct node** PPNODE;

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
    else if((*first)->next == NULL)
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

void Display(PNODE first)
{
    while(first != NULL)
    {
        printf("| %d | -> ", first->data);
        first = first->next;
    }

    printf("NULL\n");
}

void InsertAtPos(PPNODE first, int no, int pos)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    int iCnt = 0;
    int iCount = 0;

    iCount = Count(*first);

    if(pos < 1 || pos > iCount + 1)
    {
        printf("Invalid Position\n");
        return;
    }


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

        for(iCnt = 1; iCnt < (pos-1); iCnt++)
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
    int iCount = 0;

    iCount = Count(*first);

    if(pos < 1 || pos > iCount)
    {
        printf("Invalid Position\n");
        return;
    }

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

        for(iCnt = 1; iCnt < (pos-1); iCnt++)
        {
            temp = temp->next;
        }

        target = temp->next;
        temp->next = temp->next->next;

        free(target);
    }
}

bool Search(PNODE first, int No)
{
    bool isFound = false;

    while(first != NULL)
    {
        if(first->data == No)
        {
            isFound = true;
            break;
        }

        first = first->next;
    }

    return isFound;
}

int CountEven(PNODE first)
{
    int iEvenCount = 0;
    
    while(first != NULL)
    {
        if((first->data % 2 ) == 0)
        {
            iEvenCount++;
        }

        first = first->next;
    }

    return iEvenCount;
}

int CountOdd(PNODE first)
{
    int iOddCount = 0;
    
    while(first != NULL)
    {
        if((first->data % 2 ) != 0)
        {
            iOddCount++;
        }

        first = first->next;
    }

    return iOddCount;
}

int Frequency(PNODE first, int No)
{
    int iCount = 0;

    while(first != NULL)
    {
        if(first->data == No)
        {
            iCount++;
        }

        first = first->next;
    }

    return iCount;
}

void DisplayEven(PNODE first)
{
    while(first != NULL)
    {
        if((first->data % 2) == 0)
        {
            printf("%d\t", first->data);
        }

        first = first->next;
    }

    printf("\n");
}

void DisplayOdd(PNODE first)
{
    while(first != NULL)
    {
        if((first->data % 2) != 0)
        {
            printf("%d\t", first->data);
        }

        first = first->next;
    }

    printf("\n");
}

int FirstOccur(PNODE first, int No)
{
    int iPos = 0;

    while(first != NULL)
    {
        iPos++;

        if(first->data == No)
        {
            break;
        }

        first = first->next;
    }

    return iPos;
}

int LastOccur(PNODE first, int No)
{
    int iPos = 0;
    int iLastOccur = 0;

    while(first != NULL)
    {
        iPos++;

        if(first->data == No)
        {
            iLastOccur = iPos;
        }

        first = first->next;
    }

    return iLastOccur;
}

int CountGreater(PNODE first, int X)
{
    int iCount = 0;

    while(first != NULL)
    {
        if(first->data > X)
        {
            iCount++;
        }

        first = first->next;
    }

    return iCount;
}

int CountLess(PNODE first, int X)
{
    int iCount = 0;

    while(first != NULL)
    {
        if(first->data < X)
        {
            iCount++;
        }

        first = first->next;
    }

    return iCount;
}

void DisplayGreater(PNODE first, int X)
{
    while(first != NULL)
    {
        if(first->data > X)
        {
            printf("%d\t", first->data);
        }

        first = first->next;
    }

    printf("\n");
}

void DisplayLess(PNODE first, int X)
{
    while(first != NULL)
    {
        if(first->data < X)
        {
            printf("%d\t", first->data);
        }

        first = first->next;
    }

    printf("\n");
}

bool IsEmpty(PNODE first)
{
    bool IsEmpty = false;
    if(first == NULL)
    {
        IsEmpty = true;
    }

    return IsEmpty;
}

void ReplaceNegative(PPNODE first)
{
    PNODE temp = NULL;

    temp = *first;

    while(temp != NULL)
    {
        if(temp->data < 0)
        {
            temp->data = 0;
        }

        temp = temp->next;
    }
}

void IncrementAll(PPNODE first)
{
    PNODE temp = NULL;

    temp = *first;

    while(temp != NULL)
    {
        temp->data = temp->data + 1;
        temp = temp->next;
    }
}

int main()
{
    PNODE head = NULL;
    int iValue = 0;
    int iRet = 0, iGreaterCount = 0, iLessCount = 0;
    bool bRet = false;

    InsertFirst(&head, 11);
    InsertFirst(&head, 21);
    InsertFirst(&head, 51);

    Display(head);
    iRet = Count(head);
    printf("Elements in linked list is : %d\n", iRet);

    InsertLast(&head, 101);
    InsertLast(&head, 121);
    InsertLast(&head, 151);

    Display(head);
    iRet = Count(head);
    printf("Elements in linked list is : %d\n", iRet);

    DeleteFirst(&head);

    Display(head);
    iRet = Count(head);
    printf("Elements in linked list is : %d\n", iRet);

    DeleteLast(&head);

    Display(head);
    iRet = Count(head);
    printf("Elements in linked list is : %d\n", iRet);

    InsertAtPos(&head, 23, 4);

    Display(head);
    iRet = Count(head);
    printf("Elements in linked list is : %d\n", iRet);

    DeleteAtPos(&head, 4);

    Display(head);
    iRet = Count(head);
    printf("Elements in linked list is : %d\n", iRet);

    printf("Enter the Number : \n");
    scanf("%d", &iValue);

    printf("Greater Elements from %d are : \n", iValue);
    DisplayGreater(head, iValue);
    iGreaterCount = CountGreater(head, iValue);
    printf("Number of Elements greater than %d is : %d\n", iValue, iGreaterCount);

    printf("Enter the Number : \n");
    scanf("%d", &iValue);

    printf("Less Elements from %d are : \n", iValue);
    DisplayLess(head, iValue);
    iLessCount = CountLess(head, iValue);
    printf("Number of Elements Less than %d is : %d\n", iValue, iLessCount);

    InsertAtPos(&head, -15, 4);
    InsertAtPos(&head, -15, 4);
    InsertAtPos(&head, -15, 4);

    Display(head);
    iRet = Count(head);
    printf("Elements in linked list is : %d\n", iRet);

    ReplaceNegative(&head);

    Display(head);
    iRet = Count(head);
    printf("Elements in linked list is : %d\n", iRet);

    IncrementAll(&head);

    Display(head);
    iRet = Count(head);
    printf("Elements in linked list is : %d\n", iRet);



    return 0;
}