/*
Doubly Linear Linked List using java
*/

import java.lang.*;
import java.util.*;

//class for node
class Node
{
	public int data;
	public Node next;
	public Node prev;
	//constructor to initialise the node
	public Node(int iNo)
	{
		data = iNo;
		next = null;
		prev = null;
	}
}

//class for DoublyLinearLinkedList
class DoublyLinearLinkedList
{
	public Node head;
	public int iSize;
	//constructor
	public DoublyLinearLinkedList()
	{
		head = null;
		iSize = 0;
	}
	
	void insertFirst(int iValue)
	{
		//create new node
		Node newn = new Node(iValue);
		
		//if LL is empty
		if(head == null)
		{
			head = newn;
		}
		//LL has at least one element
		else
		{
			newn.next = head;
			head.prev = newn;
			head = newn;
		}
		iSize++;
	}
	
	void insertLast(int iValue)
	{
		//create new node
		Node newn = new Node(iValue);
		//if LL is empty
		if(head == null)
		{
			head = newn;
		}
		//LL has at least one element
		else
		{
			Node temp = head;
			//navigate till last node
			while(temp.next != null)
			{
				temp = temp.next;
			}
			temp.next = newn;
			newn.prev = temp;
		}
		iSize++;
	}
	
	void insertAtPos(int iValue, int iPos)
	{
		//iPos = 1
		if(iPos==1)
		{
			insertFirst(iValue);
		}
		//iPos = iSize+1
		else if(iPos==(iSize+1))
		{
			insertLast(iValue);
		}
		//other position
		else
		{
			//create new node
			Node newn = new Node(iValue);
			Node temp = head;
			//navigate till one node before iPos
			for(int i=1;i<iPos-1;i++)
			{
				temp = temp.next;
			}
			newn.next = temp.next;
			newn.prev = temp;
			temp.next.prev = newn;
			temp.next = newn;
			
			iSize++;
		}
	}
	
	void deleteFirst()
	{
		//LL is empty
		if(head == null)
		{
			return;
		}
		//LL has at least one element
		else
		{
			head = head.next;
		}
		iSize--;
	}
	
	void deleteLast()
	{
		//LL is empty
		if(head == null)
		{
			return;
		}
		//LL has one element
		else if(head.next == null)
		{
			head = null;
		}
		//LL has more than one elements
		else
		{
			Node temp = head;
			//navigate till second last node
			while(temp.next.next != null)
			{
				temp = temp.next;
			}
			temp.next = null;
		}
		iSize--;
	}
	
	void deleteAtPos(int iPos)
	{
		//iPos = 1
		if(iPos == 1)
		{
			deleteFirst();
		}
		//iPos = iSize
		else if(iPos == iSize)
		{
			deleteLast();
		}
		//other position
		else
		{
			Node temp = head;
			//navigate till one node before iPos
			for(int i=1;i<iPos-1;i++)
			{
				temp = temp.next;
			}
			temp.next.next.prev = temp;
			temp.next = temp.next.next;
			
			iSize--;
		}
	}
	
	int countElements()
	{
		return iSize;
	}
	
	void displayElements()
	{
		Node temp = head;
		while(temp != null)
		{
			System.out.print(temp.data+" ");
			temp = temp.next;
		}
		System.out.println();
	}
}


class Demo
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);
		//create object
		DoublyLinearLinkedList dobj = new DoublyLinearLinkedList();
		
		int choice = 1;
		int iNum = 0;
		int iPos = 0;
		
		while(choice != 0)
		{
			System.out.println("Enter choice:");
			System.out.println("1: Insert first");
			System.out.println("2: Insert last");
			System.out.println("3: Insert at position");
			System.out.println("4: Delete first");
			System.out.println("5: Delete last");
			System.out.println("6: Delete at position");
			System.out.println("7: Count elements");
			System.out.println("8: Display elements");
			System.out.println("0: Exit the application");
			
			choice = sobj.nextInt();
			
			switch(choice)
			{
				case 1:
					System.out.println("Enter number:");
					iNum = sobj.nextInt();
					dobj.insertFirst(iNum);
					break;
					
				case 2:
					System.out.println("Enter number:");
					iNum = sobj.nextInt();
					dobj.insertLast(iNum);
					break;
					
				case 3:
					System.out.println("Enter number:");
					iNum = sobj.nextInt();
					System.out.println("Enter insert position:");
					iPos = sobj.nextInt();
					dobj.insertAtPos(iNum,iPos);
					break;
					
				case 4:
					dobj.deleteFirst();
					break;
					
				case 5:
					dobj.deleteLast();
					break;
					
				case 6:
					System.out.println("Enter delete position:");
					iPos = sobj.nextInt();
					dobj.deleteAtPos(iPos);
					break;
					
				case 7:
					System.out.println("Number of elements: "+dobj.countElements());
					break;
				
				case 8:
					dobj.displayElements();
					break;
					
				case 0:
					System.out.println("Thanks for using the application!");
			}
		}
		
		//derefer dobj so that it will be deleted by GC
		dobj = null;
	}
}