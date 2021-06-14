/*
Write Java program which accept String from user and display below pattern.
Input : Hello
Output :
 H e l l o
 H e l l o
 H e l l o
 H e l l o 
*/

import java.lang.*;
import java.util.*;

class Pattern
{
	void DisplayPattern(String s1)
	{
		char arr[] = s1.toCharArray();
		for(int i=0;i<arr.length;i++)
		{
			for(int j=0;j<arr.length;j++)
			{
				System.out.print(arr[j]+" ");
			}
			System.out.println();
		}
	}
}

class Demo
{
	public static void main(String args[])
	{
		//Accept string from user
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter string: ");
		String str = sobj.nextLine();
		
		//create object of class
		Pattern pobj = new Pattern();
		
		//call to function
		pobj.DisplayPattern(str);
	}
}