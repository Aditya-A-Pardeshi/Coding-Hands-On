/*
Write Java program which accept array of characters from user and
accept one character. Return occurrence of that character without
considering case.
Input : b N e B R b A i G i B
b
Output : 4
*/

import java.lang.*;
import java.util.*;

class Arrays
{
	int countCharacter(char arr[],char ch)
	{
		int iCnt = 0;
		for(int i=0;i<arr.length;i++)
		{
			//ch is capital
			if((ch>='A') && (ch<='Z'))
			{
				if((ch == arr[i]) || (ch == (char)((int)arr[i] - 32)))
				{
					iCnt++;
				}
			}
			//ch is small
			else if((ch>='a') && (ch<='z'))
			{
				if((ch == arr[i]) || (ch == (char)((int)arr[i] + 32)))
				{
					iCnt++;
				}
			}
		}
		return iCnt;
	}
}

class Demo
{
	public static void main(String args[])
	{
		//Accept size of array
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter size of array: ");
		int iSize = sobj.nextInt();
		
		//Allocate memory
		char crr[] = new char[iSize];
		
		//Accept elements
		System.out.println("Enter elements: ");
		for(int i=0;i<iSize;i++)
		{
			crr[i] = sobj.next().charAt(0);
		}
		
		//Accept character to search
		System.out.println("Enter character to search: ");
		char ch = sobj.next().charAt(0);
		
		//create object of class
		Arrays aobj = new Arrays();
		
		//call function
		int iCount = aobj.countCharacter(crr,ch);
		
		//Display return value
		System.out.println("Count: "+iCount);
	}
}