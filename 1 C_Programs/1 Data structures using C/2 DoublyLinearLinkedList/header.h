/*header file for Doubly Linear Linked List*/

//header file for input output operations
#include<stdio.h>		
//header file for malloc - dynamic memory allocation
#include<stdlib.h>		

//structure declaration, node of the linked list
struct Node				
{
	int data;				//variable for node data
	struct Node *next;		//pointer to hold address of next node
	struct Node *prev;		//pointer to hold address of previous node
};

//typedefs
typedef struct Node NODE;
typedef struct Node* PNODE;
typedef struct Node** PPNODE;

//function declarations - for doubly linear linked list

void InsertFirst(PPNODE, int);
//-----------------------------------------------
//Function Name: 		InsertFirst
//Description:			Inserts node in doubly linear linked list at first position
//InputParameters:	 	PPNODE,int
//return: 				void
//-----------------------------------------------

void InsertLast(PPNODE, int);
//-----------------------------------------------
//Function Name: 		InsertLast
//Description:			Inserts node in doubly linear linked list at last position
//InputParameters:	 	PPNODE,int
//return: 				void
//-----------------------------------------------

void InsertAtPos(PPNODE, int, int);
//-----------------------------------------------
//Function Name: 		InsertAtPos
//Description:			Inserts node in doubly linear linked list at specified position
//InputParameters:	 	PPNODE,int,int
//return: 				void
//-----------------------------------------------

void DeleteFirst(PPNODE);
//-----------------------------------------------
//Function Name: 		DeleteFirst
//Description:			Deletes node from first position in doubly linear linked list
//InputParameters:	 	PPNODE
//return: 				void
//-----------------------------------------------

void DeleteLast(PPNODE);
//-----------------------------------------------
//Function Name: 		DeleteLast
//Description:			Deletes node from last position in doubly linear linked list
//InputParameters:	 	PPNODE
//return: 				void
//-----------------------------------------------

void DeleteAtPos(PPNODE, int);
//-----------------------------------------------
//Function Name: 		DeleteAtPos
//Description:			Deletes node from specified position in doubly linear linked list
//InputParameters:	 	PPNODE,int
//return: 				void
//-----------------------------------------------

void Display(PNODE);
//-----------------------------------------------
//Function Name: 		Display
//Description:			Displays the nodes of doubly linear linked list
//InputParameters:	 	PNODE
//return: 				void
//-----------------------------------------------

int Count(PNODE);
//-----------------------------------------------
//Function Name: 		Count
//Description:			Counts the nodes of doubly linear linked list
//InputParameters:	 	PNODE
//return: 				int
//-----------------------------------------------