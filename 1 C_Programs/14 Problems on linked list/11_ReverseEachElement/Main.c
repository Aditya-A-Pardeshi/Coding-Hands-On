/*
1. Write a program which reverse each element of singly linked list.
Function Prototype :
void Reverse( PNODE Head);
Input linked list : |11|->|28|->|17|->|41|->|6|->|89|
Output : |11|->|82|->|71|->|14|->|6|->|98| 
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

void ReverseDigits(PNODE Head)
{
	int iDigit = 0;
	int iRev = 0;
	if(Head == NULL)
	{
		return;
	}
	while(Head != NULL)
	{
		iRev = 0;
		while(Head->Data != 0)
		{
			iDigit = Head->Data % 10;
			iRev = (iRev*10)+iDigit;
			Head->Data = Head->Data/10;
		}
		printf("| %d | ->",iRev);
		Head = Head -> Next;
	}
	printf("NULL\n");
}

int main()
{
	PNODE First = NULL;

	InsertFirst(&First, 89);
	InsertFirst(&First, 6);
	InsertFirst(&First, 41);
	InsertFirst(&First, 17);
	InsertFirst(&First, 28);
	InsertFirst(&First, 11);
	
	Display(First);
	
	ReverseDigits(First);
	
	return 0; 
}






