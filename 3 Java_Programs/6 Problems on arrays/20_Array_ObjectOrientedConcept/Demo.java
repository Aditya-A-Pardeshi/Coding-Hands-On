/*
Program to create array, accept array elements and display array using pure object oriented concepts.
*/

import java.lang.*;
import java.util.*;

class DemoArray
{
	//characteristic
	public int arr[];
	
	//parameterised constructor
	public DemoArray(int iSize)
	{
		//dynamic memory allocation
		arr = new int[iSize];
	}
	
	//Behaviour
	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter the elements: ");
		for(int i=0;i<arr.length;i++)
		{
			arr[i] = sobj.nextInt();
		}
	}
	
	//Behaviour
	public void Display()
	{
		for(int i=0;i<arr.length;i++)
		{
			System.out.print(arr[i]+" ");
		}
		System.out.println();
	}
}

class Demo
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter the number of elemnts:");
		int iSize = sobj.nextInt();
		
		DemoArray dobj = new DemoArray(iSize);
		dobj.Accept();
		dobj.Display();
	}
}