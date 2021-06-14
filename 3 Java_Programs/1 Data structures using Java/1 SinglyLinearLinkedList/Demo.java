/*
Singly Linked list creation in java
*/
import java.lang.*;
import java.util.*;

class node
{
	public int data;		//data
	public node next;		//reference
	
	//constructor
	public node(int iNo)
	{
		data = iNo;
		next = null;
	}
}
class SinglyLinkedList
{
	public node Head;
	public int iSize;
	
	//constructor
	public SinglyLinkedList()
	{
		Head = null;
	}
	
	//method
	public void InsertFirst(int iNo)
	{
		//create node
		node newn = new node(iNo);
		//if linked list is empty
		if(Head == null)
		{
			Head = newn;
		}
		//if linked list has at least one node
		else
		{
			newn.next = Head;
			Head = newn;
		}
		iSize++;
	}
	
	//Insert last method
	public void InsertLast(int iNo)
	{
		node newn = new node(iNo);
		
		if(Head == null)
		{
			Head = newn;
		}
		else
		{
			node temp = Head;
			while(temp.next != null)
			{
				temp = temp.next;
			}
			temp.next = newn;
		}
		iSize++;
	}
	
	//Insert at position
	public void InsertAtPos(int iNo,int iPos)
	{
		//invalid position
		if((iPos<=0) || (iPos>(iSize+1)))
		{
			return;
		}
		//if iPos = 1
		else if(iPos == 1)
		{
			InsertFirst(iNo);
		}
		//if iPos = iSize+1
		else if(iPos == (iSize+1))
		{
			InsertLast(iNo);
		}
		else
		{
			node newn = new node(iNo);
			node temp = Head;
			//navigate till one node before iPos
			for(int i=1;i<iPos-1;i++)
			{
				temp = temp.next;
			}
			//create node
			
			newn.next = temp.next;
			temp.next = newn;
			iSize++;
		}
	}
	
	//Delete first
	public void DeleteFirst()
	{
		//If linked list is empty
		if(Head == null)
		{
			return;
		}
		//If linked list is not empty
		else
		{
			Head = Head.next;
		}
		iSize--;
	}
	
	//Delete last
	public void DeleteLast()
	{
		if(Head == null)
		{
			return;
		}
		else
		{
			//single node
			if(Head.next == null)
			{
				Head = null;
				iSize--;
				return;
			}
			else
			{
				node temp = Head;
				while(temp.next.next != null)
				{
					temp = temp.next;
				}
				temp.next = null;	
			}
		}
		iSize--;
	}
	
	//delete at position
	void DeleteAtPos(int iPos)
	{
		//invalid position
		if((iPos<=0) || (iPos>iSize))
		{
			return;
		}
		//if iPos = 1
		if(iPos == 1)
		{
			DeleteFirst();
		}
		//iPos = iSize
		else if(iPos == iSize)
		{
			DeleteLast();
		}
		//other position
		else
		{
			node temp = Head;
			//navigate till one node before iPos
			for(int i=1;i<iPos-1;i++)
			{
				temp = temp.next;
			}
			temp.next = temp.next.next;
			iSize--;
		}
	}
	
	//display method
	public void Display()
	{
		node temp = Head;
		while(temp != null)
		{
			System.out.print(temp.data+" ");
			temp = temp.next;
		}
		System.out.println();
	}
	
	//count method
	public int Count()
	{
		return iSize;
	}
	
}



class Demo
{
	public static void main(String args[])
	{
		SinglyLinkedList sobj = new SinglyLinkedList();
		int iNum = 0;
		int iPos = 0;
		
		Scanner s = new Scanner(System.in);
		
		int choice = 1;
		
		while(choice != 0)
		{
			System.out.println("----------------------------");
			System.out.println("Enter your choice: ");
			System.out.println("----------------------------");
			System.out.println("1: Insert First");
			System.out.println("2: Insert Last");
			System.out.println("3: Insert at position");
			System.out.println("4: Delete First");
			System.out.println("5: Delete Last");
			System.out.println("6: Delete at position");
			System.out.println("7: Display");
			System.out.println("8: Count");
			System.out.println("0: Exit");
			System.out.println("----------------------------");
			
			choice = s.nextInt();
			
			switch(choice)
			{
				case 1:
					System.out.println("Enter number:");
					iNum = s.nextInt();
					sobj.InsertFirst(iNum);
					break;
					
				case 2:
					System.out.println("Enter number:");
					iNum = s.nextInt();
					sobj.InsertLast(iNum);
					break;
					
				case 3:
					System.out.println("Enter number:");
					iNum = s.nextInt();
					System.out.println("Enter insert position:");
					iPos = s.nextInt();
					sobj.InsertAtPos(iNum,iPos);
					break;
					
				case 4:
					sobj.DeleteFirst();
					break;
					
				case 5:
					sobj.DeleteLast();
					break;
					
				case 6:
					System.out.println("Enter delete position:");
					iPos = s.nextInt();
					sobj.DeleteAtPos(iPos);
					break;
					
				case 7:
					sobj.Display();
					break;
					
				case 8:
					System.out.println(sobj.Count());
					break;
					
				case 0:
					System.out.println("Thank you for using the application");
			}
		}
		//delete the linked list
		sobj.Head = null;
	}
}