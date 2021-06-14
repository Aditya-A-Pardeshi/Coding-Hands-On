/*
Write a program which 2 strings from user and check whether first N contents of two strings are equal or not.
Note : If third parameter is greater than the size of second string then concat whole string after first string.
Input : "Milkyway Galaxy"
 "Milkyway Biscuits"
 8
Output : TRUE 
*/

import java.lang.*;
import java.util.*;

class StringDemo
{
	boolean StringCompare(String str1,String str2, int iSize)
	{
		boolean bResult = true;
		char crr1[] = str1.toCharArray();
		char crr2[] = str2.toCharArray();
		if(iSize<=str2.length())
		{
			for(int i=0;i<iSize;i++)
			{
				if(crr1[i] != crr2[i])
				{
					bResult = false;
					break;
				}
			}
		}
		else
		{
			System.out.println(str1+" "+str2);
			bResult = false;
		}
		return bResult;
	}
}

class Demo
{
	public static void main(String args[])
	{
		boolean bAns = false;
		
		//Accept two strings as input from user
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter first string: ");
		String s1 = sobj.nextLine();
		
		System.out.println("Enter second string: ");
		String s2 = sobj.nextLine();
		
		//Accept number of characters to compare
		System.out.println("Enter number of characters to compare: ");
		int iNo = sobj.nextInt();
		
		StringDemo dobj = new StringDemo();
		bAns = dobj.StringCompare(s1,s2,iNo);
		
		if(bAns == true)
		{
			System.out.println("TRUE");
		}
		else
		{
			System.out.println("FALSE");
		}
		
	}
}