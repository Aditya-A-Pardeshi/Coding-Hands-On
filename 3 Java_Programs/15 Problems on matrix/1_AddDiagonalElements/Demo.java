/*
Write a program which accept matrix from user and return addition of diagonal elements.
Input : 
3 2 5 9
4 3 2 2 
8 4 1 5
3 9 7 5
Output : 12 
*/

import java.lang.*;
import java.util.*;

class Arrays
{
	int AddDiagonal(int brr[][])
	{
		int iAns = 0;
		for(int i=0;i<brr.length;i++)
		{
			for(int j=0;j<brr[i].length;j++)
			{
				if(i == j)
				{
					iAns = iAns + brr[i][j];
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
		//Accept value of row and column from user
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter number of rows: ");
		int iRow = sobj.nextInt();
		System.out.println("Enter number of columns: ");
		int iCol = sobj.nextInt();
		
		//proceed only if value for row and column is same
		if(iRow == iCol)
		{
		//allocate memory for array of specified size
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
		
		//Display entered matrix
		System.out.println("Entered matrix is: ");
		for(int i=0;i<arr.length;i++)
		{
			for(int j=0;j<arr[i].length;j++)
			{
				System.out.print(arr[i][j]+" ");
			}
			System.out.println();
		}
		
		//object of class
		Arrays aobj = new Arrays();
		//call to function
		int iSum = aobj.AddDiagonal(arr);
		//Display return value
		System.out.println("Addition of diagonal elements: "+iSum);
		}
		else
		{
			System.out.println("Enter same value for row and column");
		}
	}
}