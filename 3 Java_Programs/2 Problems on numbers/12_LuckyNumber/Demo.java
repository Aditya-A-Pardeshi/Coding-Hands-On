/*
Accept N numbers from user and display all lucky numbers from thosee numbers
Lucky number is such a number whose value is addition of its neighbours
Input N = 10
5 8 12 4 -8 8 10 2 2 0
12 4 10 2
*/

import java.lang.*;
import java.util.*;

class Array
{
	void DisplayLucky(int brr[])
	{
		System.out.println("Elements are:");
		for(int i = 1;i<brr.length;i++)
		{
			System.out.print(brr[i]+" ");
		}
		System.out.println("Lucky elements are:");
		for(int i = 1;i<(brr.length)-1;i++)
		{
			if(brr[i] == brr[i-1] + brr[i+1])
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
		Scanner sobj = new Scanner(System.in);
		int size = 0;
	
		System.out.println("Enter number of elements:");
		size = sobj.nextInt();
		
		int arr[] = new int[size];
		System.out.println("Enter elements:");
		for(int i = 0;i<arr.length;i++)
		{
			arr[i] = sobj.nextInt();
		}

		Array aobj = new Array();
		aobj.DisplayLucky(arr);
	}
}