//helper file that contains the definitions of the functions

//include the header file created for this application
#include"header.h"

//Definition of InsertFirst function
void InsertFirst(PPNODE Head, int iNo)
{
	PNODE newn = NULL;
	//create a new node
	newn = (PNODE) malloc(sizeof(NODE));
	//initialise the new node
	newn->data = iNo;
	newn->next = NULL;
	newn->prev = NULL;
	
	//linked list is empty, store address of new node in *Head (First)
	if(*Head == NULL)
	{
		*Head = newn;
	}
	//linked list has atleast one node
	else
	{
		newn->next = *Head;
		*Head = newn;
		(*Head)->prev = newn;
	}
}

//Definition of InsertLast function
void InsertLast(PPNODE Head, int iNo)
{
	//pointer to traverse the linked list
	PNODE temp = NULL;
	//create new node
	PNODE newn = NULL;
	newn = (PNODE) malloc(sizeof(NODE));
	//initialise the new node
	newn->data = iNo;
	newn->next = NULL;
	newn->prev = NULL;
	//if linked list is empty, connect new node to Head
	if(*Head == NULL)
	{
		*Head = newn;
	}
	//linked list is not empty, travel till last node
	else
	{
		temp = *Head;
		while(temp->next != NULL)
		{
			temp = temp->next;
		}
		//now temp is pointing to last node, connect the new node to temp
		temp->next = newn;
		newn->prev = temp;
	}
}

//Definition of InsertAtPos function
void InsertAtPos(PPNODE Head, int iNo, int iPos)
{
	//variable to hold the count of elements
	int iSize = 0;		
	//temp variable to traverse the linked list
	PNODE temp = NULL;
	
	//for loop counter
	int i = 0;
	//create a new node
	PNODE newn = NULL;
	
	//find the number of elements in linked list
	iSize = Count(*Head);
	
	//Invalid position
	if((iPos<1) || (iPos>iSize+1))
	{
		return;
	}
	//First position
	else if(iPos == 1)
	{
		InsertFirst(Head,iNo);
	}
	//position is size+1, insert at last
	else if(iPos == iSize+1)
	{
		InsertLast(Head,iNo);
	}
	//other position
	else
	{
		//create new node
		newn = (PNODE) malloc(sizeof(NODE));
		//initialise the new node
		newn->data = iNo;
		newn->prev = NULL;
		newn->next = NULL;
	
		temp = *Head;
		//travel till one node before iPos
		for(i=1;i<iPos-1;i++)
		{
			temp = temp->next;
		}
		//now temp points to the node before iPos
		newn->next = temp->next;
		temp->next->prev = newn;
		temp->next = newn;
		newn->prev = temp->next;		
	}
}

//Definition of DeleteFirst function
void DeleteFirst(PPNODE Head)
{
	PNODE temp = NULL;
	//linked list is empty
	if(*Head == NULL)
	{
		return;
	}
	//linked list has one node
	else if((*Head)->next == NULL)
	{
		free(*Head);
		*Head = NULL;
	}
	//linked list has more than one node
	else
	{
		temp = *Head;
		*Head = (*Head)->next;
		(*Head)->prev = NULL;
		free(temp);
	}
}

//Definition of DeleteLast function
void DeleteLast(PPNODE Head)
{
	PNODE temp = NULL;
	//linked list is empty
	if(*Head == NULL)
	{
		return;
	}
	//linked list has one node
	else if((*Head)->next == NULL)
	{
		free(*Head);
		*Head = NULL;
	}
	//linked list has more than one node
	else
	{
		temp = *Head;
		//travel till second last node
		while(temp->next->next != NULL)
		{
			temp = temp->next;
		}
		free(temp->next);
		(temp->next) = NULL;
	}
}

void DeleteAtPos(PPNODE Head, int iPos)
{
	int iSize = 0;
	int i = 0;
	PNODE temp = NULL;
	PNODE temp2 = NULL;
	
	iSize = Count(*Head);
	
	//Invalid position
	if((iPos<1) || (iPos>iSize))
	{
		return;
	}
	//first position
	else if(iPos == 1)
	{
		DeleteFirst(Head);
	}
	//last position
	else if(iPos == iSize)
	{
		DeleteLast(Head);
	}
	//other position
	else
	{
		temp = *Head;
		for(i=1;i<iPos-1;i++)
		{
			temp=temp->next;
		}
		//now temp points to one node before position
		temp2 = temp->next;
		temp->next = temp->next->next;
		temp->next->prev = temp;
		free(temp2);
	}
}

//Definition of Display function
void Display(PNODE Head)
{
	while(Head != NULL)
	{
		printf("| %d | <-> ",Head->data);
		Head = Head->next;
	}
	printf("NULL\n");
}

//Definition of Count function
int Count(PNODE Head)
{
	int iCnt = 0;
	while(Head != NULL)
	{
		iCnt++;
		Head = Head->next;
	}
	return iCnt;
}
