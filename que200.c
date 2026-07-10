//Count number smaller than X
//count numbers smaller than given number

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#pragma pack(1)

struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void Display( PNODE first)
{
    while(first != NULL)
    {
        printf("| %d | -> ",first->data);
        first = first->next;
    }
    printf("NULL\n");
}
void InsertFirst(PPNODE first, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

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


int CountSmaller(PNODE first, int X)
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


int main()
{
    PNODE head = NULL;
    int iValue = 0;
    int iRet = 0;

    InsertFirst(&head, 101);
    InsertFirst(&head, 60);
    InsertFirst(&head, 40);
    InsertFirst(&head, 20);

    
    Display(head);

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = CountSmaller(head,iValue);
    printf("Smaller number count are: %d",iRet);

    
   
    

    return 0;
}
