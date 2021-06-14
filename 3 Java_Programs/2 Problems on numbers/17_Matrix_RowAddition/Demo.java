/*
Accept matrix from user and display addition of all elements from each row seperately
row = 4
col = 4

Input:
3 1 2 1
4 5 6 7
3 2 8 9
7 8 9 5

Output
7
22
22
29
*/

import java.lang.*;
import java.util.*;

class MatrixDemo
{
	
	void AddRows(int brr[][])
	{
		System.out.println("Addition of rows of matrix:");
		for(int i=0;i<brr.length;i++)
		{
			int sum = 0;
			for(int j=0;j<brr[i].length;j++)
			{
				sum = sum+brr[i][j];
			}
			System.out.println(sum);
		}
	}	
}

class Demo
{
	public static void main(String args[])
	{
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter number of rows");
		int row = sobj.nextInt();
		
		System.out.println("Enter number of columns");
		int col = sobj.nextInt();
		
		int arr[][] = new int[row][col];
		
		System.out.println("Enter the matrix elements:");
		for(int i=0;i<arr.length;i++)
		{
			for(int j=0;j<arr[i].length;j++)
			{
				System.out.println("Enter element "+i+j);
				arr[i][j] = sobj.nextInt();
			}
		}
		
		System.out.println("Entered array:");
		for(int i=0;i<arr.length;i++)
		{
			for(int j=0;j<arr[i].length;j++)
			{
				System.out.print(arr[i][j]+" ");
			}
			System.out.println();
		}
		
		MatrixDemo mobj = new MatrixDemo();
		mobj.AddRows(arr);
	}
	
}