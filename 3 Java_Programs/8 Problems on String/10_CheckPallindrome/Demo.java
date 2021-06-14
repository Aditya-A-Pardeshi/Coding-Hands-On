/*
Accept string from user and check whether the string is palindrome or not without considering its case.
Input : "1abccBA1"
Output : TRUE 
*/

import java.lang.*;
import java.util.*;

class DemoString
{
	boolean checkPallindrome(String str)
	{
		char arr[] = str.toCharArray();
		boolean bAns = true;
		int i = 0,j = 0;
		for(i=0;i<arr.length;i++)
		{
			if((arr[i]>='A') && (arr[i]<='Z'))
			{
				arr[i] = (char)((int)arr[i]+32);
			}
		}
		for(i=0,j=arr.length-1;i<j;i++,j--)
		{
			if(arr[i] != arr[j])
			{
				bAns = false;
				break;
			}
		}
		return bAns;
	}
}

class Demo
{
	public static void main(String args[])
	{
		boolean bResult = false;
		
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter string: ");
		String s1 = sobj.nextLine();
		
		DemoString dobj = new DemoString();
		bResult = dobj.checkPallindrome(s1);
		if(bResult == true)
		{
			System.out.println("TRUE");
		}
		else
		{
			System.out.println("FALSE");
		}
	}
	
}