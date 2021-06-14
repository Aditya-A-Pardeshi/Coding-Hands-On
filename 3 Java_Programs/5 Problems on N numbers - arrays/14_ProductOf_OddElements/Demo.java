/*
Write java program which accept N numbers from user and return
product of all odd elements.
Input : N : 6
Elements : 15 66 3 70 10 88 
Output : 45
Input : N : 6
Elements : 44 66 72 70 10 88
Output : 0 
*/

import java.lang.*;
import java.util.*;

class Numbers
{
	int displayElements(int brr[],int iSize)
	{	
		int iResult = 0;
		int iAns = 1;
		for(int i=0;i<iSize;i++)
		{
			if(brr[i]%2 != 0)
			{
				iAns = iAns * brr[i];
				iResult = 1;
			}
		}
		if(iResult == 0)
		{
			return iResult;
		}
		else
		{
			return iAns;
		}
	}
	
}

class Demo
{
	public static void main(String args[])
	{
		int iSize = 0;
		int iResult = 0;
		
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
		
		//object of Numbers class
		Numbers nobj = new Numbers();
		
		//call to function
		iResult = nobj.displayElements(arr,iSize);
		System.out.println(iResult);
	}
}