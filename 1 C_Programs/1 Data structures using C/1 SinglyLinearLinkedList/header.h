/*header file for Singly Linear Linked List*/

//header file for input output operations
#include<stdio.h>		
//header file for malloc - dynamic memory allocation
#include<stdlib.h>		

//structure declaration for node of linked list
struct Node				
{
	int data;
	struct Node *next;	
};

//typedefs
typedef struct Node NODE;
typedef struct Node* PNODE;
typedef struct Node** PPNODE;

//function declarations - for singly linear linked list

void InsertFirst(PPNODE, int);
//-----------------------------------------------
//Function Name: 		InsertFirst
//Description:			Inserts node in singly linear linked list at first position
//InputParameters:	 	PPNODE,int
//return: 				void
//-----------------------------------------------

void InsertLast(PPNODE, int);
//-----------------------------------------------
//Function Name: 		InsertLast
//Description:			Inserts node in singly linear linked list at last position
//InputParameters:	 	PPNODE,int
//return: 				void
//-----------------------------------------------

void InsertAtPos(PPNODE, int, int);
//-----------------------------------------------
//Function Name: 		InsertAtPos
//Description:			Inserts node in singly linear linked list at specified position
//InputParameters:	 	PPNODE,int,int
//return: 				void
//-----------------------------------------------

void DeleteFirst(PPNODE);
//-----------------------------------------------
//Function Name: 		DeleteFirst
//Description:			Deletes node from first position in singly linear linked list
//InputParameters:	 	PPNODE
//return: 				void
//-----------------------------------------------

void DeleteLast(PPNODE);
//-----------------------------------------------
//Function Name: 		DeleteLast
//Description:			Deletes node from last position in singly linear linked list
//InputParameters:	 	PPNODE
//return: 				void
//-----------------------------------------------

void DeleteAtPos(PPNODE, int);
//-----------------------------------------------
//Function Name: 		DeleteAtPos
//Description:			Deletes node from specified position in singly linear linked list
//InputParameters:	 	PPNODE,int
//return: 				void
//-----------------------------------------------

void Display(PNODE);
//-----------------------------------------------
//Function Name: 		Display
//Description:			Displays the nodes of singly linear linked list
//InputParameters:	 	PNODE
//return: 				void
//-----------------------------------------------

int Count(PNODE);
//-----------------------------------------------
//Function Name: 		Count
//Description:			Counts the nodes of singly linear linked list
//InputParameters:	 	PNODE
//return: 				int
//-----------------------------------------------