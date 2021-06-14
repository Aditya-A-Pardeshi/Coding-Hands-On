//header file for Doubly Circular Linked List

//header file for input output
#include<stdio.h>
//header file for dynamic memory allocation, malloc
#include<stdlib.h>

//structure declaration for Node (Doubly Circular Linked Linked node)
struct Node
{
	int Data;
	struct Node *Next;
	struct Node *Prev;
};

//typedef declarations
typedef struct Node NODE;
typedef struct Node* PNODE;
typedef struct Node** PPNODE;

//function declarations
void InsertFirst(PPNODE, PPNODE, int);
//-----------------------------------------------
//Function Name: 		InsertFirst
//Description:			Inserts node in doubly circular linked list at first position
//InputParameters:	 	PPNODE,PPNODE,int
//return: 				void
//-----------------------------------------------

void InsertLast(PPNODE, PPNODE, int);
//-----------------------------------------------
//Function Name: 		InsertLast
//Description:			Inserts node in doubly circular linked list at last position
//InputParameters:	 	PPNODE,PPNODE,int
//return: 				void
//-----------------------------------------------

void InsertAtPos(PPNODE, PPNODE, int, int);
//-----------------------------------------------
//Function Name: 		InsertAtPos
//Description:			Inserts node in doubly circular linked list at specified position
//InputParameters:	 	PPNODE,PPNODE,int,int
//return: 				void
//-----------------------------------------------

void DeleteFirst(PPNODE,PPNODE);
//-----------------------------------------------
//Function Name: 		DeleteFirst
//Description:			Deletes node from first position in doubly circular linked list
//InputParameters:	 	PPNODE,PPNODE
//return: 				void
//-----------------------------------------------

void DeleteLast(PPNODE,PPNODE);
//-----------------------------------------------
//Function Name: 		DeleteLast
//Description:			Deletes node from last position in doubly circular linked list
//InputParameters:	 	PPNODE,PPNODE
//return: 				void
//-----------------------------------------------

void DeleteAtPos(PPNODE, PPNODE, int);
//-----------------------------------------------
//Function Name: 		DeleteAtPos
//Description:			Deletes node from specified position in doubly circular linked list
//InputParameters:	 	PPNODE,PPNODE,int
//return: 				void
//-----------------------------------------------

void Display(PNODE, PNODE);
//-----------------------------------------------
//Function Name: 		Display
//Description:			Displays the nodes of doubly circular linked list
//InputParameters:	 	PNODE,PNODE
//return: 				void
//-----------------------------------------------

int Count(PNODE, PNODE);
//-----------------------------------------------
//Function Name: 		Count
//Description:			Counts the nodes of doubly circular linked list
//InputParameters:	 	PNODE,PNODE
//return: 				int
//-----------------------------------------------