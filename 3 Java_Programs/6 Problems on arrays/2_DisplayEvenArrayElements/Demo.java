/*
Write Java program which accept two arrays from user and display even contents of each array.
Input : 2 9 6 5 2 3
 45 6 12 18 23 4
Output : 2 6 2
 6 12 18 4 
*/

import java.lang.*;
import java.util.*;

class Arrays
{
	void displayArray(int brr[])
	{
		for(int i = 0;i<brr.length;i++)
		{
			if(brr[i]%2==0)
			{
				System.out.print(brr[i]+" ");
			}
		}
	}
}

class Demo
{
	public static void main(String args[])
	{
		//Accept size of array1
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter number of elements for array1: ");
		int iSize1 = sobj.nextInt();
		
		//Allocate memory
		int arr1[] = new int[iSize1];
		
		//Accept elements
		System.out.println("Enter elements: ");
		for(int i=0;i<iSize1;i++)
		{
			arr1[i] = sobj.nextInt();
		}
		
		//Accept size of array2
		System.out.println("Enter number of elements for array2: ");
		int iSize2 = sobj.nextInt();
		
		//Allocate memory
		int arr2[] = new int[iSize2];
		
		//Accept elements
		System.out.println("Enter elements: ");
		for(int i=0;i<iSize2;i++)
		{
			arr2[i] = sobj.nextInt();
		}
		
		//create object of class
		Arrays aobj = new Arrays();
		
		//call function
		System.out.println("Even elements of array are: ");
		aobj.displayArray(arr1);
		//newline
		System.out.println();
		aobj.displayArray(arr2);
	}
}