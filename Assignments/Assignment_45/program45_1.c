/*
    Consider Singly Linked list

    1. Display Only Odd Elements

    Print Only Odd elements.

    void DisplayOdd(PNODE first);
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

int main()
{
    PNODE head = NULL;
    int iValue = 0;
    int iRet = 0, iFrequencyCnt = 0;
    int iEvenCnt = 0, iOddCnt = 0;
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

    InsertFirst(&head, 12);
    InsertLast(&head, 22);
    InsertAtPos(&head, 58, 4);
    InsertFirst(&head, 11);
    iEvenCnt = CountEven(head);
    iOddCnt = CountOdd(head);
    Display(head);
    iRet = Count(head);
    printf("Elements in linked list is : %d\n", iRet);
    printf("Count of Even elements in linked list is : %d\n", iEvenCnt);
    printf("Count of Odd elements in linked list is : %d\n", iOddCnt);

    printf("Enter the number you want count the frequency : \n");
    scanf("%d", &iValue);

    iFrequencyCnt = Frequency(head, iValue);

    printf("Frequency of %d is : %d\n", iValue, iFrequencyCnt);

    printf("Even Element in linked list are : \n");
    DisplayEven(head);
    iEvenCnt = CountEven(head);
    printf("Count of Even elements in linked list is : %d\n", iEvenCnt);

    printf("Odd Element in linked list are : \n");
    DisplayOdd(head);
    iOddCnt = CountOdd(head);
    printf("Count of Odd elements in linked list is : %d\n", iOddCnt);

    return 0;
}