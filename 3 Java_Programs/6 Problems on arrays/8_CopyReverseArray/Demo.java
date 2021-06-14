/*
Write a java program which accept one array from user and copy the contents of that array into another array in reverse order and return new array
*/

import java.lang.*;
import java.util.*;

class Arrays
{
	int[] reverseArray(int arr[])
	{
		int rarr[] = new int[arr.length];
		int j = 0;
		for(int i=arr.length-1;i>=0;i--)
		{
			rarr[j] = arr[i];
			j++;
		}
		return rarr;
	}
}

class Demo
{
	public static void main(String args[])
	{		
		//Accept array from user
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter size of array: ");
		int iSize = sobj.nextInt();
		int arr[] = new int[iSize];
		System.out.println("Enter elements of array: ");
		for(int i=0;i<iSize;i++)
		{
			arr[i] = sobj.nextInt();
		}
		
		Arrays aobj = new Arrays();
		int newArr[] = aobj.reverseArray(arr);
		
		System.out.println("Reversed array is:");
		for(int j=0;j<iSize;j++)
		{
			System.out.print(newArr[j]+" ");
		}
	}
}