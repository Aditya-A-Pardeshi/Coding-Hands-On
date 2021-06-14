/*
Implementation of Binary search tree using java programming language
*/

import java.lang.*;
import java.util.*;

class Node
{
	int data;
	Node lchild;
	Node rchild;
	Node(int iNum)
	{
		data = iNum;
		lchild = null;
		rchild = null;
	}
}

class BinarySearchTree
{
	Node Root;
	public BinarySearchTree()
	{
		Root = null;
	}
	
	public void insertElement(int iNum)
	{
		Node newn = new Node(iNum);
		if(Root == null)
		{
			Root = newn;
		}
		else
		{
			Node temp = Root;
			while(true)
			{
				if(iNum == temp.data)
				{
					System.out.println("Element already present");
					newn = null;
					break;
				}
				else if(iNum < temp.data)
				{
					if(temp.lchild == null)
					{
						temp.lchild = newn;
						break;
					}
					temp = temp.lchild;
				}
				else if(iNum > temp.data)
				{
					if(temp.rchild == null)
					{
						temp.rchild = newn;
						break;
					}
					temp = temp.rchild;					
				}				
			}
		}
	}
	
	public boolean searchElement(int iNum)
	{
		Node temp = Root;
		while(temp != null)
		{
			if(temp.data == iNum)
			{
				break;
			}
			if(iNum < temp.data)
			{
				temp = temp.lchild;
			}
			else
			{
				temp = temp.rchild;
			}
		}
		if(temp == null)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
	
	//LDR
	public void inOrder(Node temp)
	{
		if(temp != null)
		{
			inOrder(temp.lchild);
			System.out.print(temp.data+" ");
			inOrder(temp.rchild);
		}
	}
	
	//DLR
	public void preOrder(Node temp)
	{
		if(temp != null)
		{
			System.out.print(temp.data+" ");
			inOrder(temp.lchild);
			inOrder(temp.rchild);
		}
	}
	
	//LRD
	public void postOrder(Node temp)
	{
		if(temp != null)
		{
			inOrder(temp.lchild);
			inOrder(temp.rchild);
			System.out.print(temp.data+" ");
		}
	}
}

class Demo
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);
		int iNo = 0;
		int choice = 1;
		
		BinarySearchTree bobj = new BinarySearchTree();
		
		while(choice != 0)
		{
			System.out.println("---------------------------");
			System.out.println("Enter your choice: ");
			System.out.println("---------------------------");
			System.out.println("1. Insert element");
			System.out.println("2. Search element");
			System.out.println("3. Display in preorder");
			System.out.println("4. Display in postorder");
			System.out.println("5. Display in order");
			System.out.println("0. Exit");
			System.out.println("---------------------------");
			
			choice = sobj.nextInt();
			
			switch(choice)
			{
				case 1:
					System.out.println("Enter number: ");
					iNo = sobj.nextInt();
					bobj.insertElement(iNo);
					break;
				
				case 2:
					System.out.println("Enter element to search");
					iNo = sobj.nextInt();
					boolean result = bobj.searchElement(iNo);
					if(result == true)
					{
						System.out.println("Element found");
					}
					else
					{
						System.out.println("Element not found");
					}
					break;
				
				case 3:
					Node temp1 = bobj.Root;
					bobj.preOrder(temp1);
					System.out.println();
					break;
				
				case 4:
					Node temp2 = bobj.Root;
					bobj.postOrder(temp2);
					System.out.println();
					break;
				
				case 5:
					Node temp3 = bobj.Root;
					bobj.inOrder(temp3);
					System.out.println();
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
