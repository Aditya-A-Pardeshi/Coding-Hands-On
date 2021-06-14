/*
Write a java program which accept one array from user and check whether that array and its elements are palindrome or not.
Input : 11 252 387783 252 11
Output : TRUE
Input : 11 252 387783 77 11
Output : FALSE
Input : 11 252 786 252 11
Output : TRUE
Input : 11 252 786 253 11
Output : FALSE
*/

import java.lang.*;
import java.util.*;

class Arrays
{
	boolean checkPallindrome(int arr[])
	{
		boolean bRet = true;
		int i = 0,j = 0;
		
		for(i=0,j=arr.length-1;i<j;i++,j--)
		{
			if(arr[i] != arr[j])
			{
				bRet = false;
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
		boolean bAns = false;
		
		//Accept array from user
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter size of array: ");
		int iSize = sobj.nextInt();
		int arr[] = new int[iSize];
		System.out.println("Enter elements of array: ");
		for(int i=0;i<iSize;i++)
		{
			arr[i] = sobj.nextInt();
		}
		
		Arrays aobj = new Arrays();
		bAns = aobj.checkPallindrome(arr);
		
		if(bAns == true)
		{
			System.out.println("TRUE");
		}
		else
		{
			System.out.println("FALSE");
		}
	}
}