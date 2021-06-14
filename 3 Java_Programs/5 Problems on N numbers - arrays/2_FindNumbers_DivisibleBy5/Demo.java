/*
Write Java program which accept N numbers from user and display all such elements which are divisible by 5.
Input : N : 6
Elements : 85 66 3 80 93 88
Output : 85 80
*/

import java.lang.*;
import java.util.*;

class Numbers
{
	void checkDivisibility(int brr[],int iSize)
	{
		int iEvenSum = 0;
		int iOddSum = 0;
		for(int i=0;i<iSize;i++)
		{
			if(brr[i]%5==0)
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
		int iSize = 0;
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
		//call checkDivisibility function from Numbers class
		nobj.checkDivisibility(arr,iSize);
	}	
}