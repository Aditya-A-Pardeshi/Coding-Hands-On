/*
Write a program which accept matrix and one number from user and return frequency of that number. 
Input : 
3 2 5 9
4 3 2 2 
8 4 1 5
3 9 7 5
Number: 9
Output : 2 
*/

import java.lang.*;
import java.util.*;

class Arrays
{
	int countNumber(int brr[][],int iNo)
	{
		int iAns = 0;
		for(int i=0;i<brr.length;i++)
		{
			for(int j=0;j<brr[i].length;j++)
			{
				if(brr[i][j] == iNo)
				{
					iAns++;
				}
			}
		}
		return iAns;
	}
}

class Demo
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter number of rows: ");
		int iRow = sobj.nextInt();
		System.out.println("Enter number of columns: ");
		int iCol = sobj.nextInt();
		
		int arr[][] = new int[iRow][iCol];
		//Accept elements
		System.out.println("Enter the matrix elements: ");
		for(int i=0;i<arr.length;i++)
		{
			for(int j=0;j<arr[i].length;j++)
			{
				System.out.println("Enter element: "+(i+1)+(j+1));
				arr[i][j] = sobj.nextInt();
			}
		}
		
		System.out.println("Entered matrix is: ");
		for(int i=0;i<arr.length;i++)
		{
			for(int j=0;j<arr[i].length;j++)
			{
				System.out.print(arr[i][j]+" ");
			}
			System.out.println();
		}
		
		System.out.println("Enter element to count: ");
		int iNum = sobj.nextInt();
		
		Arrays aobj = new Arrays();
		int iCnt = aobj.countNumber(arr,iNum);
		System.out.println(iNum+" appears "+iCnt+" times");
	}
}