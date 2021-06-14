/*
Write a java program which accept string from user and check
whether it contains vowels in it or not.
Input : "Operating"
Output : TRUE
Input : "Demo"
Output : TRUE
Input : "xyz"
Output : FALSE 
*/

import java.lang.*;
import java.util.*;

class DemoString
{
	boolean checkVowel(String str)
	{
		boolean bAns = false;
		
		//convert string to array
		char arr[] = str.toCharArray();
		
		//iterate through the character array
		for(int i=0;i<str.length();i++)
		{
			if((arr[i]=='A') || (arr[i]=='a'))
			{
				bAns = true;
				break;
			}
			else if((arr[i]=='E') || (arr[i]=='e'))
			{
				bAns = true;
				break;
			}
			else if((arr[i]=='I') || (arr[i]=='i'))
			{
				bAns = true;
				break;
			}
			else if((arr[i]=='O') || (arr[i]=='o'))
			{
				bAns = true;
				break;
			}
			else if((arr[i]=='U') || (arr[i]=='u'))
			{
				bAns = true;
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
		//Accept string from user
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter string:");
		String s1 = sobj.nextLine();
		
		//Create object of DemoString class
		DemoString dobj = new DemoString();
		
		//call to the function
		bResult = dobj.checkVowel(s1);
		
		//Display the return value
		if(bResult == true)
		{
			System.out.println("TRUE");
		}
		else
		{
			System.out.println("FASLE");
		}
	}
}