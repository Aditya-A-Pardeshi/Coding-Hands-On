/*
Write java program which accept array of characters from user and
count number of capital characters.
Input : b N j B R b A d G G
Output : 6
*/

import java.lang.*;
import java.util.*;

class Arrays
{
	int countCapital(char crr[])
	{
		int iCnt = 0;
		for(int i = 0;i<crr.length;i++)
		{
			if((crr[i]>='A') && (crr[i]<='Z'))
			{
				iCnt++;
			}
		}
		return iCnt;
	}
}

class Demo
{
	public static void main(String args[])
	{
		//Accept character array size
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter size of character array: ");
		int iSize = sobj.nextInt();
		
		//Allocate memory
		char arr[] = new char[iSize];
		
		//Accept array contents
		for(int i=0;i<iSize;i++)
		{
			arr[i] = sobj.next().charAt(0);
		}
		
		//object of class
		Arrays aobj = new Arrays();
		
		//call function
		int iCount = aobj.countCapital(arr);
		
		//Display return value
		System.out.println("Capital character count: "+iCount);
	}
}