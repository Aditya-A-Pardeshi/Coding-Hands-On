/*
Write a java program which accepts 2 strings from user and concat N characters of second string after first string.Value of N should be accepted from user.
Note : If third parameter is greater than the size of second string then concat whole string after first string.
Input : "Hemalata Choudhary"
 "SW Engineer"
 2
Output : "Hemalata Choudhary SW"
*/

import java.lang.*;
import java.util.*;

class StringDemo
{
	void StrConcat(String str1,String str2, int iNo)
	{
		int iSize = 0;
		//extract string of length iNo from str2
		if(iNo < str2.length())
		{
			char crr[] = str2.toCharArray();
			char temp[] = new char[iNo];
			for(int i = 0;i<iNo;i++)
			{
				temp[i] = crr[i];
			}
			String str3 = String.valueOf(temp);
			System.out.println(str1+" "+str3);
		}
		//just concat the two strings
		else
		{
			System.out.println(str1+" "+str2);
		}
	}
}

class Demo
{
	public static void main(String args[])
	{
		//Accept two strings from user
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter first string:");
		String s1 = sobj.nextLine();
		System.out.println("Enter second string:");
		String s2 = sobj.nextLine();
		//Accept number of characters to concat
		System.out.println("Enter number of characters to concat:");
		int iNum = sobj.nextInt();
		
		//create object of the class
		StringDemo dobj = new StringDemo();
		//Call to function
		dobj.StrConcat(s1,s2,iNum);
	}
}