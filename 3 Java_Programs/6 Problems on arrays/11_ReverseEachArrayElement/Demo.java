/*
Write java program which accept array from user and reverse each number of that array.
Input : 89 687 56 549 87 9
Output : 98 786 65 945 78 9
*/

import java.lang.*;
import java.util.*;

class Arrays
{
	void reverseArrayElement(int brr[])
	{
		int iRev = 0;
		for(int i=0;i<brr.length;i++)
		{
			while(brr[i] != 0)
			{
				iRev = (iRev*10) + (brr[i]%10);
				brr[i] = brr[i]/10;
			}
			System.out.print(iRev+" ");
			iRev = 0;
		}
	}
}

class Demo
{
	public static void main(String args[])
	{
		//Accept number f array elemnts
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter number of array elements: ");
		int iSize = sobj.nextInt();
		
		//alocate memory for array
		int arr[] = new int[iSize];
		
		//Accept array elements
		System.out.println("Enter array elements: ");
		for(int i=0;i<iSize;i++)
		{
			arr[i] = sobj.nextInt();
		}
		
		//create class object
		Arrays aobj = new Arrays();
		
		//call function
		aobj.reverseArrayElement(arr);
	}
}