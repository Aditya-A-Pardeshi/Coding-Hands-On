/*
Write a Java program which accept string from user and count
number of capital characters.
Input : "Linux And Multi OS"
Output : 5
*/

import java.lang.*;
import java.util.*;

class DemoString
{
	int countCapital(String s1)
	{
		//convert string to character array
		char arr[] = s1.toCharArray();
		int iCnt = 0;
		//iterate through the character array
		for(int i=0;i<s1.length();i++)
		{
			if((arr[i]>='A') && (arr[i]<='Z'))
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
		int iCapital = 0;
		
		//Accept string from user
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter string:");
		String str = sobj.nextLine();
		
		//create object of class
		DemoString dobj = new DemoString();
		
		//call function
		iCapital = dobj.countCapital(str);
		
		//display return value
		System.out.println(iCapital);
	}
}