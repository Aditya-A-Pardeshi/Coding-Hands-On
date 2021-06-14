/*
4. Write a program which return largest element from singly linear linked
list.
Function Prototype :int Maximum( PNODE Head);
Input linked list : |110|->|230|->|320|->|240|
Output : 320 
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

int Maximum(PNODE Head, int *iSecond)
{
	if(Head == NULL)
	{
		return FALSE;
	}
	
	int iMax = Head->Data;
	
	//traverse the linked list till last
	while(Head != NULL)
	{
		if(Head->Data > iMax)
		{
			*iSecond = iMax;
			iMax = Head->Data;
		}
		else if(*iSecond<Head->Data)
		{
			*iSecond = Head->Data;
		}
		Head = Head->Next;
	}
	return TRUE;
}

int main()
{
	PNODE First = NULL;
	BOOL bRet = FALSE;
	int iSecond = 0;

	InsertFirst(&First, 240);
	InsertFirst(&First, 320);
	InsertFirst(&First, 230);
	InsertFirst(&First, 110);
	
	Display(First);
	
	bRet = Maximum(First,&iSecond);
	if(bRet == FALSE)
	{
		printf("The list is empty\n");
	}
	else
	{
		printf("Maximum is %d\n",iSecond);
	}
	
	return 0;
}