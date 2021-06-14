/*
Write a java program which accept string from user and count
number of small characters.
Input : "Linux Operating System"
Output : 17
*/

import java.lang.*;
import java.util.*;

class DemoString
{
	int countSmall(String s1)
	{
		int iCnt = 0;
		
		//convert string to character array
		char arr[] = s1.toCharArray();
		
		//iterate through the character array
		for(int i=0;i<s1.length();i++)
		{
			if((arr[i]>='a') && (arr[i]<='z'))
			{
				iCnt++;
			}
		}
		return iCnt;
	}
}

class Demo
{
	public static void main(String args[])
	{
		int iSmallCount = 0;
		//Accept string from user
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter string:");
		String str = sobj.nextLine();
		
		//create object of class
		DemoString dobj = new DemoString();
		
		//call the function
		iSmallCount = dobj.countSmall(str);
		
		//Display return value
		System.out.println(iSmallCount);
	}
}