/*
5. Write a program which return smallest element from singly linear linked
list.
Function Prototype :int Minimum( PNODE Head);
Input linked list : |110|->|230|->|20|->|240|->|640|
Output : 20
*/
#include<stdio.h>
#include<stdlib.h>
//macro definition
#define TRUE 1
#define FALSE 0
//typedef for BOOL
typedef int BOOL;
//structure declaration
struct node
{
	int Data;
	struct node *Next;
};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head, int no)
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
	//travel the linked list
	while(Head != NULL)
	{
		printf("| %d | -> ",Head->Data);
		Head = Head->Next;
	}
	printf("NULL\n");
}

int Minimum(PNODE Head, int *iMin)
{
	if(Head == NULL)
	{
		return FALSE;
	}
	*iMin = Head->Data;
	
	//traverse the linked list till last
	while(Head != NULL)
	{
		if(Head->Data < *iMin)
		{
			*iMin = Head->Data;
		}
		Head = Head->Next;
	}
	return TRUE;
}

int main()
{
	PNODE First = NULL;
	BOOL bRet = FALSE;
	int iMin = 0;

	InsertFirst(&First, 640);
	InsertFirst(&First, 240);
	InsertFirst(&First, 20);
	InsertFirst(&First, 230);
	InsertFirst(&First, 110);
	
	Display(First);
	
	bRet = Minimum(First,&iMin);
	if(bRet == FALSE)
	{
		printf("The list is empty\n");
	}
	else
	{
		printf("Minimum is %d\n",iMin);
	}
	
	return 0;
}