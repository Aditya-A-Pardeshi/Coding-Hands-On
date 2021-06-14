/*
Write java program which accept N numbers from user and accept
Range, Display all elements from that range
Input : N : 6
Start: 60
End : 90
Elements : 85 66 3 76 93 88
Output : 85 66 76 88
Input : N : 6
Start: 30
End : 50
Elements : 85 66 3 76 93 88
Output : 
*/

import java.lang.*;
import java.util.*;

class Numbers
{
	void displayElements(int brr[],int iSize, int iStart, int iEnd)
	{	
		for(int i=0;i<iSize;i++)
		{
			if((brr[i] > iStart) && (brr[i] < iEnd))
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
		int iStart = 0;
		int iEnd = 0;
		
		//accept number of elements from user
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter number of elements:");
		iSize = sobj.nextInt();
		
		//memory allocation for these many elements
		int arr[] = new int[iSize];
		
		//Accept elements
		System.out.println("Enter elements: ");
		for(int i=0;i<iSize;i++)
		{
			arr[i] = sobj.nextInt();
		}
		
		//Ask user for range
		System.out.println("Enter start range:");
		iStart = sobj.nextInt();
		System.out.println("Enter end range:");
		iEnd = sobj.nextInt();
		
		//object of Numbers class
		Numbers nobj = new Numbers();
		
		//call to function
		nobj.displayElements(arr,iSize,iStart,iEnd);
	}
}