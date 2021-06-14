/*
2. Write a program which displays all elements which are prime from singly
linear linked list.
Function Prototype :int DisplayPrime( PNODE Head);
Input linked list : |11|->|20|->|17|->|41|->|22|->|89|
Output : 11 17 41 89 
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

int AddEven(PNODE Head)
{
	int iSum = 0;
	if(Head == NULL)
	{
		return;
	}	
	//traverse the linked list till last
	while(Head != NULL)
	{
		if(Head->Data % 2 == 0)
		{
			iSum = iSum+Head->Data;
		}
		Head = Head->Next;
	}
	return iSum;
}

int main()
{
	PNODE First = NULL;
	int iResult = 0;

	InsertFirst(&First, 89);
	InsertFirst(&First, 6);
	InsertFirst(&First, 41);
	InsertFirst(&First, 17);
	InsertFirst(&First, 28);
	InsertFirst(&First, 41);
	
	Display(First);
	
	iResult = AddEven(First);
	printf("Sum of even elements: %d",iResult);
	
	return 0;
}