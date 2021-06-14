/*
Write Java program which accept array of characters from user and
replace each capital character with its corresponding small character.
Input : b N j B R b A d G G
Output : b n j b r b a d g g
*/

import java.lang.*;
import java.util.*;

class Arrays
{
	void convertCase(char arr[])
	{
		for(int i=0;i<arr.length;i++)
		{
			if((arr[i]>='a') && (arr[i]<='z'))
			{
				arr[i] = (char)((int)arr[i] - 32);
			}
		}
		
		//display changed array
		for(int i=0;i<arr.length;i++)
		{
			System.out.print(arr[i]+" ");
		}
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
		aobj.convertCase(crr);
	}
}