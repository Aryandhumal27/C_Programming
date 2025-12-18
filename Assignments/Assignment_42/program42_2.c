/*2. Write a program which search last occurance of particular element from singly linear linked list.
 function should return position at which element is found.

 Function Prototype : 

 int SearchLastOcc(PNODE first, int no)

 Input linked list : |10|->|20|->|30|->|40|->|50|->|30|->|70|

 Input element : 30

 Output : 6
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
    int iValue = 0;
    int iRet = 0;

    InsertFirst(&head, 70);
    InsertFirst(&head, 30);
    InsertFirst(&head, 50);
    InsertFirst(&head, 40);
    InsertFirst(&head, 30);
    InsertFirst(&head, 20);
    InsertFirst(&head, 10);

    printf("Enter the element : ");
    scanf("%d", &iValue);

    iRet = SearchLastOcc(head, iValue);

    Display(head);

    if(iRet == 0)
    {
        printf("Element not present in Linked List");
    }
    else
    {
        printf("Element Last occurance at position : %d", iRet);
    }

    return 0;
}