//search an element
//check whether a number is present 

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


bool Search(PNODE first, int No)
{
    while(first != NULL)
    {
        if(first->data == No)
        {
            return true;
        }

        first = first->next;
    }

    return false;
}

int main()
{
    PNODE head = NULL;
    int iValue = 0;

    InsertFirst(&head, 101);
    InsertFirst(&head, 51);
    InsertFirst(&head, 21);
    InsertFirst(&head, 11);
    

    Display(head);

    printf("Enter number to search : ");
    scanf("%d",&iValue);

    if(Search(head, iValue))
    {
        printf("Element is present.\n");
    }
    else
    {
        printf("Element is not present.\n");
    }

    return 0;
}
