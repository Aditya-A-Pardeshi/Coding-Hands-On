/*
Write java program which accept array from user and replace each
member with summation of its digit.
Input : 89 687 56 549 87 9
Output : 17 21 11 18 15 9
*/

import java.lang.*;
import java.util.*;

class Arrays
{
	void addArrayElementDigits(int brr[])
	{
		int iSum = 0;
		for(int i=0;i<brr.length;i++)
		{
			while(brr[i] != 0)
			{
				iSum = iSum + (brr[i]%10);
				brr[i] = brr[i]/10;
			}
			System.out.print(iSum+" ");
			iSum = 0;
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
		aobj.addArrayElementDigits(arr);
	}
}