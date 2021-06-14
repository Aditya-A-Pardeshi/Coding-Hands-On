//helper file that contains the definitions of the functions

//include the header file created for this application
#include"header.h"

//definition of InsertFirst method
void InsertFirst(PPNODE Head, int iNum)
{
	//Pointer to hold address of new node
	PNODE newn = NULL;
	//Create new node dynamically using malloc
	//hold address of new node in newn, typecast return value of malloc
	newn = (PNODE) malloc(sizeof(NODE));
	
	//Initialise the new node
	newn->data = iNum;
	newn->next = NULL;
	
	//Linked List is empty, attach newn to Head
	if(*Head == NULL)
	{
		*Head = newn;
	}
	//Linked List is not empty
	else
	{
		//point newn to first node
		newn->next = *Head;		
		//point *Head to new node
		*Head = newn;			
	}
}

//definition of InsertLast function
void InsertLast(PPNODE Head, int iNo)
{
	//temp variable to traverse through the linked list
	PNODE temp = NULL;
	//Create new node
	PNODE newn = NULL;
	newn = (PNODE)malloc(sizeof(NODE));
	//initialise the new node
	newn->data = iNo;
	newn->next = NULL;
	
	//Linked list is empty, attach newn to Head
	if(*Head == NULL)
	{
		*Head = newn;
	}
	
	//Linked list is not empty
	else
	{
		temp = *Head;
		//travel the linked list till the last node
		while(temp->next != NULL)
		{
			temp = temp->next;
		}
		//now temp is pointing to the last node
		//attach newn to temp (last node)
		temp->next = newn;
	}
}

//Definition of InsertAtPos function
void InsertAtPos(PPNODE Head, int iNo, int iPos)
{
	//variable to hold size of linked list
	int iSize = 0;
	
	//variable for for loop counter
	int i = 0;
	
	//variable to hold temp pointer to traverse the linked list
	PNODE temp = NULL;
	
	//creating and initialising the new node
	PNODE newn = NULL;
	newn = (PNODE) malloc(sizeof(NODE));
	newn->next = NULL;
	newn->data = iNo;
	
	//Call Count function to get number of elements in Linked List
	iSize = Count(*Head);
	
	//Invalid position
	if((iPos<1) || (iPos>(iSize+1)))
	{
		return;
	}
	//insert at first position
	else if(iPos == 1)
	{
		InsertFirst(Head,iNo);
	}
	//insert at last position
	else if(iPos == iSize+1)
	{
		InsertLast(Head,iNo);
	}
	//insert at other position
	else
	{
		temp = *Head;
		//travel till one node before position
		for(i=1;i<iPos-1;i++)
		{
			temp = temp->next;
		}
		//now temp is pointing to one node before insert position node
		//attach newn to temp
		newn->next = temp->next;
		temp->next = newn;
	}
}

//Definition of DeleteFirst function
void DeleteFirst(PPNODE Head)
{
	PNODE temp = NULL;
	//Linked List is empty, do nothing
	if(*Head == NULL)
	{
		return;
	}
	//Linked List is not empty, delete first node, point head to second node
	else
	{
		temp = (*Head)->next;
		free(*Head);
		*Head = temp;
	}
}

//Definition of DeleteLast
void DeleteLast(PPNODE Head)
{
	PNODE temp = NULL;
	//if Linked List is empty, do nothing
	if(*Head == NULL)
	{
		return;
	}
	//Linked List is not empty
	else
	{
		temp = *Head;
		while(temp->next->next != NULL)
		{
			temp = temp->next;
		}
		free(temp->next);
		temp->next = NULL;
	}
}

//Definition of DeleteAtPos
void DeleteAtPos(PPNODE Head, int iPos)
{
	//Linked List is empty
	if(*Head == NULL)
	{
		return;
	}
	int iSize = 0;
	int i = 0;
	
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
		PNODE temp = *Head;
		PNODE temp2 = NULL;
		//traverse till one node before position
		for(i=1;i<iPos-1;i++)
		{
			temp = temp->next;
		}			
		//delete the node at position, point temp to node after position
		temp2 = temp->next;
		temp->next = temp->next->next;
		free(temp2);
	}
}

//Definition of Display function
void Display(PNODE Head)
{
	//traverse the linked list till last node
	while(Head != NULL)
	{
		printf("| %d | ->",Head->data);
		Head = Head->next;
	}
	printf(" NULL\n");
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
