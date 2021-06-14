/*
Write program to search an element uing bidirectional linear search
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
		
	//bidirectional linear search
	public boolean LinearSearchBI(int no)
	{
		int iStart = 0;
		int iEnd = 0;
		boolean bRet = false;
		for(iStart=0,iEnd=arr.length-1;iStart<=iEnd;iStart++,iEnd--)
		{
			if((arr[iStart] == no) || (arr[iEnd] == no))
			{
				bRet = true;
				break;
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

