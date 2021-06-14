/*
Write a java program which accept two arrays from user and display minimum element of each array.
Input : 2 9 7 5 2 3
9 3 5 5
Output : 2 3
*/


import java.lang.*;
import java.util.*;

class Arrays
{
	int FindMinimum(int arr[])
	{
		int i = 0;
		int iMin = arr[0];
		for(i=1;i<arr.length;i++)
		{
			if(arr[i]<iMin)
			{
				iMin = arr[i];
			}
		}
		return iMin;
	}
}

class Demo
{
	public static void main(String args[])
	{
		int iSize = 0,i = 0,iAns1 = 0,iAns2 = 0;
		
		//Accept array from user
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
		
		Arrays aobj = new Arrays();
		iAns1 = aobj.FindMinimum(arr1);
		
		System.out.println("Enter size of second array: ");
		iSize = sobj.nextInt();
		int arr2[] = new int[iSize];
		System.out.println("Enter elements of array2: ");
		for(i=0;i<iSize;i++)
		{
			System.out.println("Enter element"+(i+1));
			arr2[i] = sobj.nextInt();
		}
		iAns2 = aobj.FindMinimum(arr2);
		System.out.println("Answer: "+iAns1+" "+iAns2);
	}
}