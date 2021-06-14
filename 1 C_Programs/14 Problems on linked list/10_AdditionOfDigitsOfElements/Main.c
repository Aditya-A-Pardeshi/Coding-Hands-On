/*
5. Write a program which display addition of digits of element from singly
linear linked list.
Function Prototype :int SumDigit( PNODE Head);
Input linked list : |110|->|230|->|20|->|240|->|640|
Output : 2 5 2 6 10 
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

void SumDigits(PNODE Head)
{
	int iSum = 0;
	if(Head == NULL)
	{
		return;
	}
	
	//traverse the linked list till last
	while(Head != NULL)
	{
		iSum = 0;
		while(Head->Data != 0)
		{			
			iSum = iSum + (Head->Data%10);	
			Head->Data = Head->Data/10;
		}
		printf("%d\t",iSum);
		Head = Head->Next;
	}
}

int main()
{
	PNODE First = NULL;
	
	InsertFirst(&First, 440);
	InsertFirst(&First, 313);
	InsertFirst(&First, 201);
	InsertFirst(&First, 115);
	
	Display(First);
	
	SumDigits(First);
	
	return 0;
}