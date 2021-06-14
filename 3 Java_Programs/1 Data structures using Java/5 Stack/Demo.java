/*
Implementation of stack using java programming language
*/

import java.lang.*;
import java.util.*;

class Node
{
	int data;
	Node next;
	public Node(int iNum)
	{
		data = iNum;
		next = null;
	}
}

class Stack
{
	Node Head;
	int iSize;
	public Stack()
	{
		Head = null;
		iSize = 0;
	}
	
	public void push(int iNo)
	{
		//create new node
		Node newn = new Node(iNo);
		
		//If stack is empty
		if(Head == null)
		{
			Head = newn;
		}
		//Stack has elements
		else
		{
			newn.next = Head;
			Head = newn;
		}
		iSize++;
	}
	
	public boolean isEmpty()
	{
		if(Head == null)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	
	public int pop()
	{
		int temp = Head.data;
		Head = Head.next;
		iSize--;
		return temp;
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
		Scanner sobj = new Scanner(System.in);
		int iNo = 0;
		int choice = 1;
		
		Stack obj = new Stack();
		
		while(choice != 0)
		{
			System.out.println("-----------------------------");
			System.out.println("Enter your choice: ");
			System.out.println("-----------------------------");
			System.out.println("1. Push element");
			System.out.println("2. Pop element");
			System.out.println("3. Count elements");
			System.out.println("4. Display elements");
			System.out.println("0. Exit");
			System.out.println("-----------------------------");
			
			choice = sobj.nextInt();
			
			switch(choice)
			{
				case 1:
					System.out.println("Enter number to push: ");
					iNo = sobj.nextInt();
					obj.push(iNo);
					break;
				
				case 2:
					if(obj.isEmpty() == true)
					{
						System.out.println("Stack is empty");
					}
					else
					{
						System.out.println("Popped element is: "+obj.pop());
					}
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
