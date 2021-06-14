//helper file for Doubly Circular Linked List

//include the header file created for the application
#include"header.h"

//Function definitions

void InsertFirst(PPNODE Head, PPNODE Tail, int iValue)
{
	PNODE newn = NULL;
	//create new node
	newn = (PNODE) malloc(sizeof(NODE));
	//initialise newn members
	newn->Data = iValue;
	newn->Next = NULL;
	newn->Prev = NULL;
	//Linked List is empty
	if((*Head == NULL) && (*Tail == NULL))
	{
		*Head = newn;
		*Tail = newn;
	}
	//Linked List has at least one node
	else
	{
		newn->Next = *Head;
		(*Head)->Prev = newn;
		*Head = newn;
		
	}
	(*Head)->Prev = *Tail;
	(*Tail)->Next = *Head;
}

void InsertLast(PPNODE Head, PPNODE Tail, int iValue)
{
	PNODE newn = NULL;
	//create new node
	newn = (PNODE) malloc(sizeof(NODE));
	//initialise newn members
	newn->Data = iValue;
	newn->Next = NULL;
	newn->Prev = NULL;
	//Linked List is empty
	if((*Head == NULL) && (*Tail == NULL))
	{
		*Head = newn;
		*Tail = newn;
	}
	//Linked List has at least one node
	else
	{
		(*Tail)->Next = newn;
		newn->Prev = *Tail;
		*Tail = newn;
		
	}
	(*Head)->Prev = *Tail;
	(*Tail)->Next = *Head;
}

void InsertAtPos(PPNODE Head, PPNODE Tail, int iValue, int iPos)
{
	int iSize = 0;
	int i = 0;
	PNODE temp = NULL;
	PNODE newn = NULL;
	iSize = Count(*Head,*Tail);
	
	if((iPos<1) || (iPos>iSize+1))
	{
		return;
	}
	else if(iPos==1)
	{
		InsertFirst(Head,Tail,iValue);
	}
	else if(iPos==iSize+1)
	{
		InsertLast(Head,Tail,iValue);
	}
	else
	{
		//travel till one node before iPos
		temp = *Head;
		for(i=1;i<iPos-1;i++)
		{
			temp = temp->Next;
		}
		//now temp points to one node before iPos
		newn = (PNODE) malloc(sizeof(NODE));
		newn->Data = iValue;
		newn->Next = NULL;
		newn->Prev = NULL;
		
		newn->Prev = temp;
		newn->Next = temp->Next;
		temp->Next = newn;
		temp->Next->Prev = newn;		
	}
}

void DeleteFirst(PPNODE Head,PPNODE Tail)
{
	PNODE temp = *Head;
	//Linked List is empty
	if((*Head == NULL) || (*Tail == NULL))
	{
		return;
	}
	//One node
	else if(*Head == *Tail)
	{
		free(*Head);
		*Head = NULL;
		*Tail = NULL;
	}
	//more than one node
	else
	{
		temp = *Head;
		(*Head)->Next->Prev = *Tail;
		*Head = (*Head)->Next;
		
		free(temp);
	}	
}

void DeleteLast(PPNODE Head,PPNODE Tail)
{
	PNODE temp = *Head;
	//Linked List is empty
	if((*Head == NULL) || (*Tail == NULL))
	{
		return;
	}
	//One node
	else if(*Head == *Tail)
	{
		free(*Head);
		*Head = NULL;
		*Tail = NULL;
	}
	//more than one node
	else
	{
		temp = *Tail;
		(*Tail)->Prev->Next = *Head;
		*Tail = (*Tail)->Prev;
		
		free(temp);
	}	
}

void DeleteAtPos(PPNODE Head, PPNODE Tail, int iPos)
{
	int iSize = 0;
	int i = 0;
	PNODE temp = NULL;
	PNODE temp2 = NULL;
	
	iSize = Count(*Head,*Tail);
	
	if((iPos<1) || (iPos>iSize))
	{
		return;
	}
	else if(iPos==1)
	{
		DeleteFirst(Head,Tail);
	}
	else if(iPos==iSize+1)
	{
		DeleteLast(Head,Tail);
	}
	else
	{
		//travel till one node before iPos
		temp = *Head;
		for(i=1;i<iPos-1;i++)
		{
			temp = temp->Next;
		}
		//now temp points to one node before iPos
		//save address of node to delete
		temp2 = temp->Next;	
		temp->Next->Prev = temp;
		temp->Next = temp->Next->Next;
		free(temp2);
	}
}


void Display(PNODE Head, PNODE Tail)
{
	if((Head == NULL) && (Tail == NULL))
	{
		return;
	}
	do
	{
		printf("| %d | <->",Head->Data);
		Head = Head->Next;
	}
	while(Head != Tail->Next);
	printf("\n");
}

int Count(PNODE Head, PNODE Tail)
{
	int iCnt = 0;
	if((Head == NULL) && (Tail == NULL))
	{
		return iCnt;
	}
	do
	{
		iCnt++;
		Head = Head->Next;
	}
	while(Head != Tail->Next);
	
	return iCnt;
}