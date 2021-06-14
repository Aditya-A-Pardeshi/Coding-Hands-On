/*
Write java program which accept N numbers from user and accept one another number as NO , return index of first occurrence of that NO.
Input : N : 6
NO: 66
Elements : 85 66 3 66 93 88
Output : 1
Input : N : 6 
NO: 12
Elements : 85 11 3 15 11 111
Output : -1 
*/
import java.lang.*;
import java.util.*;

class Numbers
{
	int checkElement(int brr[],int iSize, int iNum)
	{
		int iAns = -1;
		
		for(int i=0;i<iSize;i++)
		{
			if(brr[i] == iNum)
			{
				iAns = i;
				break;
			}
		}
		return iAns;
	}
	
}

class Demo
{
	public static void main(String args[])
	{
		int iSize = 0;
		int iSearchElement = 0;
		int iIndex = 0;
		
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
		
		//Ask user which element to search
		System.out.println("Enter element to search:");
		iSearchElement = sobj.nextInt();
		
		//object of Numbers class
		Numbers nobj = new Numbers();
		
		//call to function
		iIndex = nobj.checkElement(arr,iSize,iSearchElement);
		System.out.println("Index of first occurence of "+iSearchElement+" is "+iIndex);
	}
}