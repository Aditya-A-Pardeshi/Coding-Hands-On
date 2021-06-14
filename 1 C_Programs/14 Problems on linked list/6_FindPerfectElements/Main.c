/*
1. Write a program which displays all elements which are perfect from singly
linear linked list.
Function Prototype :int DisplayPerfect( PNODE Head);
Input linked list : |11|->|28|->|17|->|41|->|6|->|89|
Output : 6 28
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
BOOL IsPerfect(int iNum)
{
	int i = 0;
	int iSum = 0;
	for(i=1;i<=iNum/2;i++)
	{
		if(iNum%i==0)
		{
			iSum = iSum+i;
		}
	}
	if(iSum==iNum)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}
void FindPerfect(PNODE Head)
{
	BOOL temp = FALSE;
	if(Head == NULL)
	{
		return;
	}	
	//traverse the linked list till last
	while(Head != NULL)
	{
		temp = IsPerfect(Head->Data);
		if(temp == TRUE)
		{
			printf("%d\t",Head->Data);
		}
		Head = Head->Next;
	}
}

int main()
{
	PNODE First = NULL;
	BOOL bRet = FALSE;

	InsertFirst(&First, 89);
	InsertFirst(&First, 6);
	InsertFirst(&First, 41);
	InsertFirst(&First, 17);
	InsertFirst(&First, 28);
	InsertFirst(&First, 41);
	
	Display(First);
	
	FindPerfect(First);
	
	return 0;
}