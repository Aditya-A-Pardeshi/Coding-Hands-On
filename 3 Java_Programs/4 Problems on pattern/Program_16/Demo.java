/*
Write Java program which accept String from user and display
below pattern.
Input : Hello
Output :
 H * * * *
 H e * * *
 H e l * *
 H e l l *
*/

import java.lang.*;
import java.util.*;

class Pattern
{
	void displayPattern(String str)
	{
		char arr[] = str.toCharArray();
		for(int i=0;i<arr.length;i++)
		{
			for(int j=0;j<arr.length;j++)
			{
				if(j<=i)
				{
					System.out.print(arr[j]+" ");
				}
				else
				{
					System.out.print("* ");
				}
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
		System.out.println("Enter string:");
		String s1 = sobj.nextLine();
		
		//object of class
		Pattern pobj = new Pattern();
		
		//call to function
		pobj.displayPattern(s1);
	}
}