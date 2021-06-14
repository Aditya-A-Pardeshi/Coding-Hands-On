/*
Write Java program which accept array from user and display below
pattern.
Input : 8 9 7 6 4 2 4
Output :
* * * * * * * *
* * * * * *
* * * *
* *
* * * *
*/

import java.lang.*;
import java.util.*;

class Arrays
{
	void jaggedArray(int brr[])
	{
		for(int i=0;i<brr.length;i++)	
		{
			for(int j=0;j<brr[i];j++)
			{
				System.out.print("* ");
			}
			System.out.println();
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
		int arr[] = new int[iSize];
		
		//Accept elements
		System.out.println("Enter elements: ");
		for(int i=0;i<iSize;i++)
		{
			arr[i] = sobj.nextInt();
		}
		
		//create object of class
		Arrays aobj = new Arrays();
		
		//call function
		aobj.jaggedArray(arr);
	}
}