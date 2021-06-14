/*
Write program to search an element using binary search
*/

import Marvellous.MarvellousArray;
import java.lang.*;
import java.util.*;

//inheritance
class Searching extends MarvellousArray
{
	public Searching(int iSize)
	{
		//call constructor of parent class
		super(iSize);		
	}
		
	//check if array is sorted
	public boolean CheckSorted()
	{
		boolean bRet = true;
		for(int i=0;i<arr.length-1;i++)
		{
			if(arr[i] > arr[i+1])
			{
				bRet = false;
				break;
			}
		}
		return bRet;
	}
	
	//binary search
	public boolean BinarySearch(int iNo)
	{
		boolean bRet = false;
		int iStart = 0,iEnd = 0,iMiddle = 0;
		iEnd = arr.length-1;
		
		//check if array is sorted
		if(CheckSorted() == false)
		{
			System.out.println("Array is not sorted");
			return false;
		}
		
		while(iStart<=iEnd)
		{
			iMiddle = (iStart+iEnd)/2;
			if((arr[iMiddle] == iNo) || (arr[iStart] == iNo) || (arr[iEnd] == iNo))
			{
				bRet = true;
				break;
			}
			if(iNo>arr[iMiddle])
			{
				iStart = iMiddle+1;
			}
			if(iNo<arr[iMiddle])
			{
				iEnd = iMiddle-1;
			}
		}
		return bRet;
	}
}

class Demo
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter size of array: ");
		int iSize = sobj.nextInt();
		
		Searching sobj1 = new Searching(iSize);
		sobj1.Accept();
		sobj1.Display();
		
		System.out.println("Enter element to search: ");
		int iValue = sobj.nextInt();
		boolean bAns = sobj1.BinarySearch(iValue);
		if(bAns == true)
		{
			System.out.println("Element is found");
		}
		else
		{
			System.out.println("Element is not found");	
		}
	}
}

