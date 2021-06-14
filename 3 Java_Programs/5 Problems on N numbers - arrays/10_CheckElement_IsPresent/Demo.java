/*
Write java program which accept N numbers from user and accept
one another number as NO , check whether NO is present or not.
Input : N : 6
NO: 66
Elements : 85 66 3 66 93 88
Output : TRUE
Input : N : 6
NO: 12
Elements : 85 11 3 15 11 111
Output : FALSE 
*/

import java.lang.*;
import java.util.*;

class Numbers
{
	boolean checkElement(int brr[],int iSize, int iNum)
	{
		boolean bAns = false;
		int iStart = 0;
		int iEnd = 0;
		for(iStart=0,iEnd=iSize-1;iStart<=iEnd;iStart++,iEnd--)
		{
			if((brr[iStart] == iNum) || (brr[iEnd] == iNum))
			{
				bAns = true;
			}
		}
		return bAns;
	}
	
}

class Demo
{
	public static void main(String args[])
	{
		int iSize = 0;
		int iSearchElement = 0;
		boolean bRet = false;
		
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
		bRet = nobj.checkElement(arr,iSize,iSearchElement);
		if(bRet==true)
		{
			System.out.println(iSearchElement+" is present");
		}
		else
		{
			System.out.println(iSearchElement+" is not present");
		}
	}
}