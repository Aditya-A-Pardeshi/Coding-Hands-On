/*
1. Write a program which search first occurrence of particular element from
singly linear linked list.
Function should return position at which element is found.
Function Prototype :int SearchFirstOcc( PNODE Head , int no );
Input linked list : |10|->|20|->|30|->|40|->|50|->|30|->|70|
Input element : 30
Output : 3
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

int SearchFirstOcc(PNODE Head, int iNo)
{
	if(Head == NULL)
	{
		return 0;
	}
	int iPos = 1;
	int iRet = 0;
	//traverse the linked list till last
	while(Head != NULL)
	{
		if(Head->Data == iNo)
		{
			iRet = iPos;
			break;
		}
		Head = Head->Next;
		iPos++;
	}
	return iRet;
}

int main()
{
	PNODE First = NULL;
	int iNo = 0;
	int iPos = 0;

	InsertFirst(&First, 70);
	InsertFirst(&First, 30);
	InsertFirst(&First, 50);
	InsertFirst(&First, 40);
	InsertFirst(&First, 30);
	InsertFirst(&First, 20);
	InsertFirst(&First, 10);
	
	Display(First);

	printf("Enter the element to search: \n");
	scanf("%d",&iNo);
	
	iPos = SearchFirstOcc(First,iNo);
	if(iPos == 0)
	{
		printf("There is no such element\n");
	}
	else
	{
		printf("First occurance of %d is %d\n",iNo,iPos);
	}
	
	return 0;
}