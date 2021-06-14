/*
Write a java program which accept string from user and return
difference between frequency of small characters and frequency
of capital characters.
Input : "LINUX and C"
Output : 3 (6-3)
*/

import java.lang.*;
import java.util.*;

class DemoString
{
	int countCharacters(String str)
	{
		int iCapital = 0;
		int iSmall = 0;
		
		//convert string to array
		char arr[] = str.toCharArray();
		
		//iterate through the character array
		for(int i=0;i<str.length();i++)
		{
			if((arr[i]>='A') && (arr[i]<='Z'))
			{
				iCapital++;
			}
			else if((arr[i]>='a') && (arr[i]<='z'))
			{
				iSmall++;
			}
			else{}
		}
		return (iCapital - iSmall);
	}
}

class Demo
{
	public static void main(String args[])
	{
		int iResult = 0;
		//Accept string from user
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter string:");
		String s1 = sobj.nextLine();
		
		//Create object of DemoString class
		DemoString dobj = new DemoString();
		
		//call to the function
		iResult = dobj.countCharacters(s1);
		
		//Display the return value
		System.out.println(iResult);
	}
}