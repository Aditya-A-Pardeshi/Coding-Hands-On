/*
2. Write a program which display all palindrome elements of singly linked
list.
Function Prototype :
void DisplayPallindrome( PNODE Head);
Input linked list : |11|->|28|->|17|->|414|->|6|->|89|
Output : 11 6 414 
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
		printf("| %d | -> ",Head->Data);
		Head = Head->Next;
	}
	printf(" NULL\n");
}

void DisplayPallindromes(PNODE Head)
{
	int iDigit = 0;
	int iRev = 0;
	int temp;
	if(Head == NULL)
	{
		return;
	}
	while(Head != NULL)
	{
		iRev = 0;
		temp = Head->Data;
		while(temp != 0)
		{
			iDigit = temp % 10;
			iRev = (iRev*10)+iDigit;
			temp = temp/10;
		}
		if(Head->Data == iRev)
		{
			printf("| %d | -> ",Head->Data);
		}
		Head = Head -> Next;
	}
	printf(" NULL\n");
}

int main()
{
	PNODE First = NULL;

	InsertFirst(&First, 89);
	InsertFirst(&First, 6);
	InsertFirst(&First, 414);
	InsertFirst(&First, 17);
	InsertFirst(&First, 28);
	InsertFirst(&First, 11);
	
	Display(First);
	
	DisplayPallindromes(First);
	
	return 0; 
}






