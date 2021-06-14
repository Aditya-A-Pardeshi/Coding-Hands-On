/*
Write a program which 2 strings from user and check whether contents of two strings are equal or not.
Input : "Marvellous Universe"
 "Marvellous Universe"
Output : TRUE 
*/

import java.lang.*;
import java.util.*;

class StringDemo
{
	boolean StringCompare(String str1,String str2)
	{
		boolean bResult = true;
		if(str1.length() != str2.length())
		{
			bResult = false;
			return bResult;
		}
		char crr1[] = str1.toCharArray();
		char crr2[] = str2.toCharArray();
		for(int i=0;i<str1.length();i++)
		{
			if(crr1[i] != crr2[i])
			{
				bResult = false;
				break;
			}
		}
		return bResult;
	}
}

class Demo
{
	public static void main(String args[])
	{
		boolean bAns = false;
		
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter first string: ");
		String s1 = sobj.nextLine();
		
		System.out.println("Enter second string: ");
		String s2 = sobj.nextLine();
		
		StringDemo dobj = new StringDemo();
		bAns = dobj.StringCompare(s1,s2);
		
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