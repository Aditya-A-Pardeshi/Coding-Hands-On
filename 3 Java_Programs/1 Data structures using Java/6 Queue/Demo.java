/*
Implementation of Queue using java programming language
*/

import java.lang.*;
import java.util.*;

class Node
{
	int data;
	Node next;
	public Node(int iNo)
	{
		data = iNo;
		next = null;
	}
}

class Queue
{
	Node Head;
	int iSize;
	public Queue()
	{
		Head = null;
		iSize = 0;
	}
	
	public void enQueue(int iNum)
	{
		Node newn = new Node(iNum);
		if(Head == null)
		{
			Head = newn;
		}
		else
		{	
			newn.next = Head;
			Head = newn;
		}
		iSize++;
	}
	
	public void deQueue()
	{
		if(Head == null)
		{
			return;
		}
		else if(Head.next == null)
		{
			Head = null;
		}
		else
		{
			Node temp = Head;
			while(temp.next.next != null)
			{
				temp = temp.next;
			}
			temp.next = null;
		}
	}
	
	public int countElements()
	{
		return iSize;
	}
	
	public void displayElements()
	{
		Node temp = Head;
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
		int iNo = 0;
		int choice = 1;
		
		Scanner sobj = new Scanner(System.in);
		
		Queue obj = new Queue();
		
		while(choice != 0)
		{
			System.out.println("-------------------------");
			System.out.println("Enter your choice: ");
			System.out.println("-------------------------");
			System.out.println("1. Enqueue");
			System.out.println("2. Dequeue");
			System.out.println("3. Count elements");
			System.out.println("4. Display elements");
			System.out.println("0. Exit");
			System.out.println("-------------------------");
			
			choice = sobj.nextInt();
			
			switch(choice)
			{
				case 1:
					System.out.println("Enter number: ");
					iNo = sobj.nextInt();
					obj.enQueue(iNo);
					break;
				
				case 2:
					obj.deQueue();
					break;
				
				case 3:
					System.out.println("Number of elements: "+obj.countElements());
					break;
				
				case 4:
					obj.displayElements();
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