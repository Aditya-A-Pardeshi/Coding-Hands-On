/*
Doubly Linear Linked List Application using java programming language
*/

import java.lang.*;
import java.util.*;

class Node
{
	int data;
	Node next;
	Node prev;
	public Node(int iNum)
	{
		data = iNum;
		next = null;
		prev = null;
	}
}

class DoublyCircularLinkedList
{
	Node Head;
	Node Tail;
	int iSize;
	public DoublyCircularLinkedList()
	{
		Head = null;
		Tail = null;
		iSize = 0;
	}
	
	public void insertFirst(int iNo)
	{
		Node newn = new Node(iNo);
		if((Head == null) && (Tail == null))
		{
			Head = newn;
			Tail = newn;
		}
		else
		{
			newn.next = Head;
			Head.prev = newn;
			Head = newn;
		}
		Head.prev = Tail;
		Tail.next = Head;
		iSize++;
	}
	
	public void insertLast(int iNo)
	{
		Node newn = new Node(iNo);
		if((Head == null) && (Tail == null))
		{
			Head = newn;
			Tail = newn;
		}
		else
		{
			newn.prev = Tail;
			Tail.next = newn;
			Tail = newn;
		}
		Head.prev = Tail;
		Tail.next = Head;
		iSize++;
	}
	
	public void insertAtPos(int iNo,int iPos)
	{
		if((iPos<0) || (iPos>(iSize+1)))
		{
			return;
		}
		if(iPos == 1)
		{
			insertFirst(iNo);
		}
		else if(iPos == (iSize+1))
		{
			insertLast(iNo);
		}
		else
		{
			Node newn = new Node(iNo);
			Node temp = Head;
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
	
	public void deleteFirst()
	{
		if((Head == null) && (Tail == null))
		{
			return;
		}
		else
		{
			Head = Head.next;
		}
		Head.prev = Tail;
		Tail.next = Head;
		iSize--;
	}
	
	public void deleteLast()
	{
		if((Head == null) && (Tail == null))
		{
			return;
		}
		else if(Head == Tail)
		{
			Head = null;
			Tail = null;
		}
		else
		{
			Tail = Tail.prev;
		}
		Head.prev = Tail;
		Tail.next = Head;
	}
	
	public void deleteAtPos(int iPos)
	{
		if((iPos<0) || (iPos>iSize))
		{
			return;
		}
		if(iPos == 1)
		{
			deleteFirst();
		}
		else if(iPos == iSize)
		{
			deleteLast();
		}
		else
		{
			Node temp = Head;
			for(int i=1;i<iPos-1;i++)
			{
				temp = temp.next;
			}
			temp.next = temp.next.next;
			temp.next.prev = temp;
			iSize--;
		}
	}
	
	public int countElements()
	{
		return iSize;
	}
	
	public void displayElements()
	{
		Node temp = Head;
		do
		{
			System.out.print(temp.data+" ");
			temp = temp.next;
		}while(temp != Tail.next);
		System.out.println();
	}
}

class Demo
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);
		int iNum = 0;
		int iPos = 0;
		int choice = 1;
		
		DoublyCircularLinkedList dobj = new DoublyCircularLinkedList();
		
		while(choice != 0)
		{
			System.out.println("----------------------------");
			System.out.println("Enter choice: ");
			System.out.println("----------------------------");
			System.out.println("1. Insert first");
			System.out.println("2. Insert last");
			System.out.println("3. Insert at position");
			System.out.println("4. Delete first");
			System.out.println("5. Delete last");
			System.out.println("6. Delete at position");
			System.out.println("7. Count elements");
			System.out.println("8. Display elements");
			System.out.println("0. Exit");
			System.out.println("----------------------------");
			
			choice = sobj.nextInt();
			
			switch(choice)
			{
				case 1:
					System.out.println("Enter number: ");
					iNum = sobj.nextInt();
					dobj.insertFirst(iNum);
					break;
				
				case 2:
					System.out.println("Enter number: ");
					iNum = sobj.nextInt();
					dobj.insertLast(iNum);
					break;
				
				case 3:
					System.out.println("Enter number: ");
					iNum = sobj.nextInt();
					System.out.println("Enter insert position: ");
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
					System.out.println("Enter delete position: ");
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
					System.out.println("Thank you for using the application!!");
					break;
				
				default:
					System.out.println("Wrong choice");
			}
		}
	}
}