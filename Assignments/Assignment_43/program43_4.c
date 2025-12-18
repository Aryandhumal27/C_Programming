/*4. Write a program which return second maximum element from singly linear linked list.

 Function Prototype : 

 int SecMaximum(PNODE first)

 Input linked list : |110|->|230|->|320|->|240|

 Output : 240
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

    newn->next = NULL;
    newn->data = no;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        newn->next = *first;
        *first = newn;
    }
}

int SearchFirstOcc(PNODE first, int no)
{
    int iCnt = 0;

    while(first != NULL)
    {
        iCnt++;

        if(first->data == no)
        {
            break;
        }

        first = first->next;
    }

    if(first == NULL)
    {
        return 0;
    }
    else
    {
        return iCnt;
    }  
}

int SearchLastOcc(PNODE first, int no)
{
    int iCnt = 0;
    int LastOcc = 0;

    while(first != NULL)
    {
        iCnt++;

        if(first->data == no)
        {
            LastOcc = iCnt;
        }
        
        first = first->next;
    }

    if(LastOcc == 0)
    {
        return 0;
    }
    else
    {
        return LastOcc;
    }
}

int Addition(PNODE first)
{
    int iSum = 0;

    while(first != NULL)
    {
        iSum = iSum + first->data;
        first = first->next;
    }

    return iSum;
}

int Maximum(PNODE first)
{
    int iMax = 0;

    iMax = first->data;

    while(first != NULL)
    {
        if(first->data > iMax)
        {
            iMax = first->data;
        }

        first = first->next;
    }

    return iMax;
}

int Minimum(PNODE first)
{
    int iMin = 0;

    iMin = first->data;

    while(first != NULL)
    {
        if(first->data < iMin)
        {
            iMin = first->data;
        }

        first = first->next;
    }

    return iMin;
}

bool PerfectNumber(int iNo)
{
    int iCnt = 0, iSum = 0;

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    if(iSum == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void DisplayPerfect(PNODE first)
{
    while(first != NULL)
    {
        if(PerfectNumber(first->data) == true)
        {
            printf("%d\t", first->data);
        }

        first = first->next;
    }
}

bool CheckPrime(int iNo)
{
    int iCnt = 0;

    for(iCnt = 2; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            break;
        }
    }

    if(iCnt <= ((iNo/2)))
    {
        return false;
    }
    else
    {
        return true;
    }
}

void DisplayPrime(PNODE first)
{
    while(first != NULL)
    {
        if(CheckPrime(first->data) == true)
        {
            printf("%d\t", first->data);
        }

        first = first->next;
    }
}

int AdditionEven(PNODE first)
{
    int iSum = 0;

    while(first != NULL)
    {
        if(((first->data) % 2) == 0)
        {
            iSum = iSum + first->data;
        }

        first = first->next;
    }

    return iSum;
}

int SecMaximum(PNODE first)
{
    int iMax = 0, iSecMax = 0;
    iMax = first->data;


    while(first != NULL)
    {
        if(first->data > iMax)
        {
            iMax = first->data;
        }

        if(first->data > iSecMax && first->data < iMax)
        {
            iSecMax = first->data;
        }

        first = first->next;
    }

    return iSecMax;
}

void Display(PNODE first)
{
    while(first != NULL)
    {
        printf("|%d|->\t", first->data);
        first = first->next;
    }

    printf("NULL\n");
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head, 240);
    InsertFirst(&head, 320);
    InsertFirst(&head, 230);
    InsertFirst(&head, 110);

    Display(head);

    iRet = SecMaximum(head);

    printf("Second Maximum Element in linked list is : %d", iRet);
    
    return 0;
}