/*
Singly Circular Linked List
*/

import java.lang.*;
import java.util.*;

class Node
{
	public int data;
	public Node next;
	public Node(int iNo)
	{
		data = iNo;
		next = null;
	}
}

class SinglyCircularLinkedList
{
	public Node head;
	public Node tail;
	int iSize;
	public SinglyCircularLinkedList()
	{
		head = null;
		tail = null;
		iSize = 0;
	}
	
	public void insertFirst(int iNum)
	{
		//create new node
		Node newn = new Node(iNum);
		//if LL is empty
		if((head == null) && (tail == null))
		{
			head = newn;
			tail = newn;
		}
		//LL is not empty
		else
		{
			newn.next = head;
			head = newn;
		}
		tail.next = head;
		iSize++;
	}
	
	public void insertLast(int iNum)
	{
		Node newn = new Node(iNum);
		if((head == null)&& (tail == null))
		{
			head = newn;
			tail = newn;
		}
		else
		{
			tail.next = newn;
			tail = newn;
		}
		tail.next = head;
		iSize++;
	}
	
	public void insertAtPos(int iNum, int iPos)
	{
		if((iPos<0) || (iPos>iSize+1))
		{
			return;
		}
		if(iPos == 1)
		{
			insertFirst(iNum);
		}
		else if(iPos == (iSize+1))
		{
			insertLast(iNum);
		}
		else
		{
			Node temp = head;
			for(int i=1;i<iPos-1;i++)
			{
				temp = temp.next;
			}
			Node newn = new Node(iNum);
			newn.next = temp.next;
			temp.next = newn;
			iSize++;
		}
	}
	
	public void deleteFirst()
	{
		if((head == null) && (tail == null))
		{
			return;
		}
		else
		{
			head = head.next;
			tail.next = head;
		}
		iSize--;
	}
	
	public void deleteLast()
	{
		if((head == null) && (tail == null))
		{
			return;
		}
		if(head == tail)
		{
			head = null;
			tail = null;
		}
		else
		{
			Node temp = head;
			while(temp.next != tail)
			{
				temp = temp.next;
			}
			temp.next = head;
			tail = temp;
		}
		iSize--;
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
			Node temp = head;
			for(int i=1;i<iPos-1;i++)
			{
				temp = temp.next;
			}
			temp.next = temp.next.next;
			iSize--;
		}
	}
	
	public void displayElements()
	{
		Node temp = head;
		do
		{
			System.out.print(temp.data+" ");
			temp = temp.next;
		}while(temp != tail.next);
		System.out.println();
	}
	
	public int countElements()
	{
		return iSize;
	}
}

class Demo
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);
		//create object
		SinglyCircularLinkedList obj = new SinglyCircularLinkedList();
		
		int choice = 1;
		int iNum = 0;
		int iPos = 0;
		
		while(choice != 0)
		{
			System.out.println("------------------------");
			System.out.println("Enter choice:");
			System.out.println("------------------------");
			System.out.println("1: Insert first");
			System.out.println("2: Insert last");
			System.out.println("3: Insert at position");
			System.out.println("4: Delete first");
			System.out.println("5: Delete last");
			System.out.println("6: Delete at position");
			System.out.println("7: Count elements");
			System.out.println("8: Display elements");
			System.out.println("0: Exit the application");
			System.out.println("------------------------");
			
			choice = sobj.nextInt();
			
			switch(choice)
			{
				case 1:
					System.out.println("Enter number:");
					iNum = sobj.nextInt();
					obj.insertFirst(iNum);
					break;
					
				case 2:
					System.out.println("Enter number:");
					iNum = sobj.nextInt();
					obj.insertLast(iNum);
					break;
					
				case 3:
					System.out.println("Enter number:");
					iNum = sobj.nextInt();
					System.out.println("Enter insert position:");
					iPos = sobj.nextInt();
					obj.insertAtPos(iNum,iPos);
					break;
					
				case 4:
					obj.deleteFirst();
					break;
					
				case 5:
					obj.deleteLast();
					break;
					
				case 6:
					System.out.println("Enter delete position:");
					iPos = sobj.nextInt();
					obj.deleteAtPos(iPos);
					break;
					
				case 7:
					System.out.println("Number of elements: "+obj.countElements());
					break;
				
				case 8:
					obj.displayElements();
					break;
					
				case 0:
					System.out.println("Thanks for using the application!");
			}
		}
		
		//derefer dobj so that it will be deleted by GC
		obj = null;
	}
}