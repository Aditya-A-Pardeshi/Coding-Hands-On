/*
Write a program which accept matrix and swap the contents of consecutive rows. 
Input : 
3 2 5 9
4 3 2 2 
8 4 1 5
3 9 7 5
Output: 
4 3 2 2 
3 2 5 9
3 9 7 5
8 4 1 5
*/

import java.lang.*;
import java.util.*;

class Arrays
{
	void swapRows(int arr[][])
	{
		int temp = 0;
		for(int i=0;i<arr.length;i=i+2)
		{
			for(int j = 0;j<arr[i].length;j++)
			{
				temp = arr[i][j];
				arr[i][j] = arr[i+1][j];
				arr[i+1][j] = temp;
			}
		}
		System.out.println("Matrix after rows swapped: ");
		for(int i=0;i<arr.length;i++)
		{
			for(int j=0;j<arr[i].length;j++)
			{
				System.out.print(arr[i][j]+" ");
			}
			System.out.println();
		}
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
		aobj.swapRows(arr);
	}
}