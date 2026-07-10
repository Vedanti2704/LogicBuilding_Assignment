//Display only Even numbers
//prints only even number

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

void DisplayEven( PNODE first)
{
    while(first != NULL)
    {
        if((first->data % 2) == 0)
        {
            printf("| %d | -> ",first->data);
            
        }
        first = first->next;
       
    }
    
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



int main()
{
    PNODE head = NULL;
    int iValue = 0;
    

    InsertFirst(&head, 101);
    InsertFirst(&head, 60);
    InsertFirst(&head, 40);
    InsertFirst(&head, 20);

    DisplayEven(head);

    
   
    

    return 0;
}
