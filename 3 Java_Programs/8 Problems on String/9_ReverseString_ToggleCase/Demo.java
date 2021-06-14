/*
Accept string from user and reverse the contents of that string by toggling the case.
Input : "aBCdef"
Output : "FEDcbA"
*/


import java.lang.*;
import java.util.*;

class DemoString
{
	String reverseString(String str)
	{
		char arr[] = str.toCharArray();
		char temp = '\0';
		int i=0,j=0;
		
		for(i=0;i<arr.length;i++)
		{
			if((arr[i]>='A') && (arr[i]<='Z'))
			{
				arr[i] = (char)((int)arr[i]+32);
			}
			else if((arr[i]>='a') && (arr[i]<='z'))
			{
				arr[i] = (char)((int)arr[i]-32);
			}
		}
		
		for(i=0,j=str.length()-1;i<j;i++,j--)
		{
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
		return String.valueOf(arr);
	}
}

class Demo
{
	public static void main(String args[])
	{	
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter string: ");
		String s1 = sobj.nextLine();
		
		DemoString dobj = new DemoString();
		String s2 = dobj.reverseString(s1);
		System.out.println(s2);
	}
	
}