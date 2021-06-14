/*
3. Write a program which display product of all digits of all element from
singly linear linked list. (Don’t consider 0)
Function Prototype :
void DisplayProduct( PNODE Head);
Input linked list : |11|->|20|->|32|->|41|
Output : 1 2 6 4 
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

void ProductDigits(PNODE Head)
{
	int iDigit = 0;
	int iProd = 1;
	if(Head == NULL)
	{
		return;
	}
	while(Head != NULL)
	{
		iProd = 1;
		while(Head->Data != 0)
		{
			iDigit = Head->Data % 10;
			if(iDigit !=0 )
			{
				iProd = iProd * iDigit;
			}
			Head->Data = Head->Data/10;
		}
		printf("| %d | ->",iProd);
		Head = Head -> Next;
	}
	printf("NULL\n");
}

int main()
{
	PNODE First = NULL;

	InsertFirst(&First, 89);
	InsertFirst(&First, 6);
	InsertFirst(&First, 45);
	InsertFirst(&First, 17);
	InsertFirst(&First, 20);
	InsertFirst(&First, 32);
	
	Display(First);
	
	ProductDigits(First);
	
	return 0; 
}






