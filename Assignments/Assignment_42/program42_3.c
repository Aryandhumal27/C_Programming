/*3. Write a program which return addition of all element from singly linear linked list.
 function should return position at which element is found.

 Function Prototype : 

 int Addition(PNODE first)

 Input linked list : |10|->|20|->|30|->|40|

 Output : 100
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

    InsertFirst(&head, 40);
    InsertFirst(&head, 30);
    InsertFirst(&head, 20);
    InsertFirst(&head, 10);

    iRet = Addition(head);

    Display(head);

    printf("Addition of all linked list elements is : %d", iRet);
    
    return 0;
}