//InsertFirst() function definition

//Include header file created for the application
#include"header.h"

//Function definitions
//InsertFirst() function definition
void InsertFirst(PPNODE Head, PPNODE Tail, int iNo)
{
	//Create node
	PNODE newn = NULL;
	newn = (PNODE) malloc(sizeof(NODE));
	//initialise the node
	newn->Data = iNo;
	newn->Next = NULL;
	
	//Linked list is empty
	if((*Head==NULL) && (*Tail==NULL))
	{
		*Head = newn;
		*Tail = newn;
	}
	//linked list has at least one node
	else
	{
		newn->Next = *Head;
		*Head = newn;
	}
	//Connect the new node to the last node
	(*Tail)->Next = *Head;
}

//InsertLast() function definition
void InsertLast(PPNODE Head, PPNODE Tail, int iNo)
{
	//create new node
	PNODE newn = NULL;
	newn = (PNODE) malloc(sizeof(NODE));
	//initialise the node
	newn->Next = NULL;
	newn->Data = iNo;
	
	//Linked list is empty
	if((*Head==NULL) && (*Tail==NULL))
	{
		*Head = newn;
		*Tail = newn;
	}
	//Linked list has at least one node
	else
	{
		//connect new node to last node
		(*Tail)->Next = newn;
		*Tail = newn;
	}
	//connect new node to last node
	(*Tail)->Next = *Head;
}

//InsertAtPos() function definition
void InsertAtPos(PPNODE Head, PPNODE Tail, int iNo, int iPos)
{
	//Variable to hold number of elements in linked list
	int iSize = 0;
	//for loop counter variable
	int i = 0;
	//temp pointer for traversing the linked list
	PNODE temp = NULL;
	//pointer for new node
	PNODE newn = NULL;
	//Find the number of elements in linked list
	iSize = Count(*Head, *Tail);
	//Invalid position, do nothing
	if((iPos<1) || (iPos>iSize+1))
	{
		return;
	}
	//First position, call InsertFirst()
	else if(iPos==1)
	{
		InsertFirst(Head,Tail,iNo);
	}
	//Last position, call InsertLast()
	else if(iPos==iSize+1)
	{
		InsertLast(Head,Tail,iNo);
	}
	//other position, tarvel till one node before position
	else
	{
		temp = *Head;
		for(i=1;i<iPos-1;i++)
		{
			temp = temp->Next;
		}
		//now temp is pointing to one node before iPos
		//create new node
		newn = (PNODE)malloc(sizeof(NODE));
		//initialise the new node
		newn->Data = iNo;
		newn->Next = NULL;
		
		//connect the new node after temp
		newn->Next = temp->Next;
		temp->Next = newn;
	}
}

//DeleteFirst() function definition
void DeleteFirst(PPNODE Head, PPNODE Tail)
{
	PNODE temp = NULL;
	//if linked list is empty, do nothing
	if((*Head==NULL) && (*Tail==NULL))
	{
		return;
	}
	//linked list has at least one element
	else
	{
		temp = *Head;
		*Head = (*Head)->Next;
		(*Tail)->Next = *Head;
		free(temp);
	}
}

//DeleteLast() function definition
void DeleteLast(PPNODE Head,PPNODE Tail)
{
	PNODE temp = NULL;
	//if linked list is empty, do nothing
	if((*Head==NULL) && (*Tail==NULL))
	{
		return;
	}
	//linked list has at least one element
	else
	{
		//travel till second last node
		temp = *Head;
		while(temp->Next->Next != *Head)
		{
			temp = temp->Next;
		}
		//now temp points to second last node
		*Tail = temp;
		free(temp->Next);
		temp->Next = *Head;
	}
}

//DeleteAtPos()
void DeleteAtPos(PPNODE Head, PPNODE Tail, int iPos)
{
	//Linked list is empty, do nothing
	if((*Head==NULL) && (*Tail==NULL))
	{
		return;
	}
	//variable to hold number of elements in linked list
	int iSize = 0;
	//for loop counter
	int i = 0;
	//temp variable to traverse in the linked list
	PNODE temp = NULL;
	PNODE temp2 = NULL;
	//Call Count function to get number of elements in linked list
	iSize = Count(*Head,*Tail);
	
	//invalid position, do nothing
	if((iPos<1) || (iPos>iSize))
	{
		return;
	}
	//first position, call DeleteFirst()
	else if(iPos==1)
	{
		DeleteFirst(Head,Tail);
	}
	//last position, call DeleteLast()
	else if(iPos==iSize)
	{
		DeleteLast(Head,Tail);
	}
	//other positions
	else
	{
		temp = *Head;
		//travel till one node before iPos
		for(i=1;i<iPos-1;i++)
		{
			temp = temp->Next;
		}
		//now temp points to one node before iPos
		temp2 = temp->Next;
		temp->Next = temp->Next->Next;
		free(temp2);
	}
}

//Display() function definition
void Display(PNODE Head, PNODE Tail)
{
	//If linked list is empty, dont do anything
	if((Head==NULL) && (Tail==NULL))
	{
		return;
	}
	//Linked list has atleast one node
	//traverse the linked list
	do
	{
		printf("| %d | -> ",Head->Data);
		Head = Head->Next;
	}
	while(Head != Tail->Next);
	printf("\n");
}

//Count() function definition
int Count(PNODE Head, PNODE Tail)
{
	int iCnt = 0;
	//If linked list is empty, do nothing
	if((Head==NULL) && (Tail==NULL))
	{
		return iCnt;
	}
	//linked list has at least one elements
	do
	{
		iCnt++;
		Head = Head->Next;
	}
	while(Head != Tail->Next);
	return iCnt;
}