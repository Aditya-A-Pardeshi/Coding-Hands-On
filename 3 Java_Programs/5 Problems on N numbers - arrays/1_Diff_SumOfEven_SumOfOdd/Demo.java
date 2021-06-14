/*
Write Java program which accept N numbers from user and return difference between summation of even elements and summation of odd elements.
Input : N : 6
Elements : 85 66 3 80 93 88
Output : 53 (234 - 181) 
*/

import java.lang.*;
import java.util.*;

class Numbers
{
	int findDifference(int brr[],int iSize)
	{
		int iEvenSum = 0;
		int iOddSum = 0;
		for(int i=0;i<iSize;i++)
		{
			if(brr[i]%2==0)
			{
				iEvenSum = iEvenSum + brr[i];
			}
			else
			{
				iOddSum = iOddSum + brr[i];
			}
		}
		return (iEvenSum-iOddSum);
	}
}

class Demo
{
	public static void main(String args[])
	{
		int iSize = 0;
		int iAns = 0;
		Scanner sobj = new Scanner(System.in);
		
		//Accept number of elements from user - size of array
		System.out.println("Enter number of elements:");
		iSize = sobj.nextInt();
		
		//Allocate memory for these elements
		int arr[] = new int[iSize];
		
		//Accept elements from user
		System.out.println("Enter the elements:");
		for(int i=0;i<iSize;i++)
		{
			arr[i] = sobj.nextInt();
		}
		
		//Create object f NUmbers class
		Numbers nobj = new Numbers();
		//call findDifference function from Numbers class
		iAns = nobj.findDifference(arr,iSize);
		
		//Display the return value
		System.out.println("Difference between sum of even and odd elements is "+iAns);
	}
	
}