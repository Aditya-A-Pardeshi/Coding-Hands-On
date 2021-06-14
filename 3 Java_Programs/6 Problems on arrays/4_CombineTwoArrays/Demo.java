/*
Write Java program which accept two arrays from user and form new array which is combination of contents of first and second array.
Input : 12 57 28 3
 99 23 54 58 6 67
Output : 12 57 28 3 99 23 54 58 6 67
*/

import java.lang.*;
import java.util.*;

class Arrays
{
	void displayArray(int brr[],int crr[])
	{
		int iSize = brr.length + crr.length;
		int drr[] = new int[iSize];
		for(int i=0;i<brr.length;i++)
		{
			drr[i] = brr[i];
		}
		int j = brr.length;
		for(int i=0;i<crr.length;i++)
		{
			drr[j] = crr[i];
			j++;
		}
		System.out.println("Combined array:");
		for(int i=0;i<drr.length;i++)
		{
			System.out.print(drr[i]+" ");
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
		aobj.displayArray(arr1,arr2);
	}
}