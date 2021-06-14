/*
5. Write a program which display largest digits of all element from singly
linear linked list.
Function Prototype : 
void DisplayLarge( PNODE Head);
Input linked list : |11|->|250|->|532|->|419|
Output : 1 5 5 9 
*/
#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
struct node
{
	int Data;
	struct node *Next;
};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;
void InsertFirst(PPNODE Head , int no )
{
	PNODE newn = NULL;

	newn = (PNODE)malloc(sizeof(NODE));

	newn->Next = NULL;
	newn->Data = no;

	if (*Head == NULL)
	{
		*Head = newn;
	}
	else
	{
		newn -> Next = *Head;
	*Head = newn;
	}
}

void Display(PNODE Head)
{
	if(Head == NULL)
	{
		return;
	}
	while(Head != NULL)
	{
		printf("| %d | ->",Head->Data);
		Head = Head->Next;
	}
	printf("NULL\n");
}

void LargestDigit(PNODE Head)
{
	int iDigit = 0;
	int iLarge = 0;
	if(Head == NULL)
	{
		return;
	}
	while(Head != NULL)
	{
		iLarge = Head->Data % 10;
		while(Head->Data != 0)
		{
			iDigit = Head->Data % 10;
			if(iDigit>iLarge)
			{
				iLarge = iDigit;
			}
			Head->Data = Head->Data/10;
		}
		printf("| %d | ->",iLarge);
		Head = Head -> Next;
	}
	printf("NULL\n");
}

int main()
{
	PNODE First = NULL;

	InsertFirst(&First, 89);
	InsertFirst(&First, 6);
	InsertFirst(&First, 250);
	InsertFirst(&First, 17);
	InsertFirst(&First, 532);
	InsertFirst(&First, 419);
	
	Display(First);
	
	LargestDigit(First);
	
	return 0; 
}






