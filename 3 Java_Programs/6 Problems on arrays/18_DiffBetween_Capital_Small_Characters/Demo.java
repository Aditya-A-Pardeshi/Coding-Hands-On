/*
Write Java program which accept array of characters from user and return difference between frequency of capital and frequency of small
characters.
Input : b N e B R b A I O G i
Output : 3 (7 - 4)
*/

import java.lang.*;
import java.util.*;

class Arrays
{
	int countCharacter(char arr[])
	{
		int iCapital = 0;
		int iSmall = 0;
		for(int i=0;i<arr.length;i++)
			
		{
			if((arr[i]>='A') && (arr[i]<='Z'))
			{
				iCapital++;
			}
			else if((arr[i]>='a') && (arr[i]<='z'))
			{
				iSmall++;
			}
		}
		
		return (iCapital - iSmall);
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
		
		//create object of class
		Arrays aobj = new Arrays();
		
		//call function
		int iCount = aobj.countCharacter(crr);
		
		//Display return value
		System.out.println("Answer: "+iCount);
	}
}