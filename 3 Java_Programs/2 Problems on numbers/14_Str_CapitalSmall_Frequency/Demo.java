/*
Accept a string from user and return difference between number of capital and small letters
*/

import java.lang.*;
import java.util.*;

class DemoString
{
	int StrFrequency(String str)
	{
		//convert string to character array
		char arr[] = str.toCharArray();
		
		int capCount = 0;
		int smallCount = 0;
		for(int i = 0;i<arr.length;i++)
		{
			if((arr[i]>='A') && (arr[i]<='Z'))
			{
				capCount++;
			}
			else if((arr[i]>='a') && (arr[i]<='z'))
			{
				smallCount++;
			}
		}
		return (capCount-smallCount);
	}
}

class Demo
{
	public static void main(String args[])
	{
		int count = 0;
		String s1 = null;
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter string");
		s1 = sobj.nextLine();
		
		DemoString dobj = new DemoString();
		count = dobj.StrFrequency(s1);
		System.out.println("Count is "+count);
	}
}

/*
C language logic
int StrFrequency(char str[])
{
	int cap = 0;
	int small = 0;
	while(*str != '\0')
	{
		if((*str >= 'A') && (*str <= 'Z))
		{
			cap++;
		}
		else if((*str >= 'a') && (*str <= 'z))
		{
			small++;
		}
		str++;
	}
	return (cap - small);
}
*/

/*
Internal implementation of toChar function
char [] toChar(String str)
{
	char arr[] = new char[str.length()];
	for(int i =0;i<str.length();i++)
	{
		arr[i] = str.charAt(i);
	}
	return arr;
}

*/