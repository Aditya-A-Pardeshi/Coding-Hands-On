/*
Write a java program which accept string from user and display it in reverse order.
Input : "OperatinG"
Output: "GnitarepO" 
*/

import java.lang.*;
import java.util.*;

class DemoString
{
	String reverseString(String str)
	{	
		char temp = '\0';
		int iStart = 0;
		int iEnd = 0;
		//convert string to array
		char arr[] = str.toCharArray();
		
		//iterate through the character array
		for(iStart=0,iEnd=arr.length-1;iStart<iEnd;iStart++,iEnd--)
		{
			temp = arr[iStart];
			arr[iStart] = arr[iEnd];
			arr[iEnd] = temp;
		}
		return String.valueOf(arr);
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
		
		//Create object of DemoString class
		DemoString dobj = new DemoString();
		
		//call to the function
		String s2 = dobj.reverseString(s1);
		
		//Display the return value
		System.out.println(s2);
	}
}