/*
Header file for Doubly Circular Linked List Application using C++ programming language
*/

#include<iostream>
using namespace std;

struct Node
{
	int data;
	struct Node *next;
	struct Node *prev;	
};

class DoublyCircularLinkedList
{
	struct Node *Head;
	struct Node *Tail;
	int Size;
	
	public:
	DoublyCircularLinkedList();
	void InsertFirst(int);
	void InsertLast(int);
	void InsertAtPos(int,int);
	void DeleteFirst();
	void DeleteLast();
	void DeleteAtPos(int);
	int CountElements();
	void DisplayElements();	
};