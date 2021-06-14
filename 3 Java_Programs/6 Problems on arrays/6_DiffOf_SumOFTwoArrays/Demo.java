/*
Write a java program which accept two arrays from user and return difference between summation of arrays.
Input : 2 9 7 5 2 3
9 3 5 5
Output : 6
*/

import java.lang.*;
import java.util.*;

class Arrays
{
	int FindDiff(int arr[],int brr[])
	{
		int i = 0;
		int iSum1 = 0,iSum2 = 0;
		for(i=0;i<arr.length;i++)
		{
			iSum1 = iSum1+arr[i];
		}
		System.out.println("Sum of elements of first array: "+iSum1);
		for(i=0;i<brr.length;i++)
		{
			iSum2 = iSum2+brr[i];
		}
		System.out.println("Sum of elements of second array: "+iSum2);
		
		return (iSum1 - iSum2);
	}
}

class Demo
{
	public static void main(String args[])
	{
		int iSize = 0,i = 0,iAns = 0;
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter size of first array: ");
		iSize = sobj.nextInt();
		int arr1[] = new int[iSize];
		System.out.println("Enter elements of array1: ");
		for(i=0;i<iSize;i++)
		{
			System.out.println("Enter element"+(i+1));
			arr1[i] = sobj.nextInt();
		}
		
		System.out.println("Enter size of second array: ");
		iSize = sobj.nextInt();
		int arr2[] = new int[iSize];
		System.out.println("Enter elements of array2: ");
		for(i=0;i<iSize;i++)
		{
			System.out.println("Enter element"+(i+1));
			arr2[i] = sobj.nextInt();
		}
		
		Arrays aobj = new Arrays();
		iAns = aobj.FindDiff(arr1,arr2);
		
		System.out.println("Answer: "+iAns);
	}
}