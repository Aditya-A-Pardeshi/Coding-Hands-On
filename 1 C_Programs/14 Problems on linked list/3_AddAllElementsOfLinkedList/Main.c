/*
3. Write a program which returns addition of all element from singly linear
linked list.
Function Prototype :int Addition( PNODE Head);
Input linked list : |10|->|20|->|30|->|40|
Output : 100 

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

int Addition(PNODE Head, int *iSum)
{
	if(Head == NULL)
	{
		return FALSE;
	}
	
	//traverse the linked list till last
	while(Head != NULL)
	{
		*iSum = *iSum + Head->Data;
		Head = Head->Next;
	}
	return TRUE;
}

int main()
{
	PNODE First = NULL;
	int iSum = 0;
	BOOL bRet = FALSE;
	/*
	InsertFirst(&First, 40);
	InsertFirst(&First, 30);
	InsertFirst(&First, 20);
	InsertFirst(&First, 10);
	*/
	Display(First);
	
	bRet = Addition(First,&iSum);
	if(bRet == FALSE)
	{
		printf("List is empty\n");
	}
	else
	{
		printf("%d\n",iSum);
	}
	
	return 0;
}