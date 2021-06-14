/*
Write a program which accept matrix and return largest number from both the diagonals 
Input : 
3 2 5 9
4 3 2 2 
8 4 1 5
3 9 7 5
Output : 9
*/

import java.lang.*;
import java.util.*;

class Arrays
{
	int largestNumber(int brr[][],int m)
	{
		int iMax = brr[0][0];
		//iterate through the rows and check only dialonal elements
		for(int i = 0;i<m;i++)
		{
			if(brr[i][i]>iMax)
			{
				iMax = brr[i][i];
			}
			if(brr[i][m-i-1]>iMax)
			{
				iMax = brr[i][m-i-1];
			}
		}
		return iMax;
	}
}

class Demo
{
	public static void main(String args[])
	{
		//Accept value for row and column from user
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter number of rows: ");
		int iRow = sobj.nextInt();
		System.out.println("Enter number of columns: ");
		int iCol = sobj.nextInt();
		
		//proceed only if number of rows and columns are equal
		if(iRow == iCol)
		{
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
		
		//Display the entered matrix
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
		int iMax = aobj.largestNumber(arr,iRow);
		System.out.println("Largest Number: "+iMax);
		}
		//if value for row and column is not same
		else
		{
			System.out.println("Enter same value for row and column");
		}
	}
}