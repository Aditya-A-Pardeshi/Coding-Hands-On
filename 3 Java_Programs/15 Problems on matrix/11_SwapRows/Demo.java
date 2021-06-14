/*
Write a java program which accept matrix from user and swap the contents of each consecutive rows
*/

import java.lang.*;
import java.util.*;

class Matrix
{
	void swapRows(int brr[][])
	{
		int temp = 0;
		for(int i=0;i<brr.length-1;i=i+2)
		{
			for(int j=0;j<brr[i].length;j++)
			{
				temp = brr[i][j];
				brr[i][j] = brr[i+1][j];
				brr[i+1][j] = temp;
			}
		}
		System.out.println("Swapped matrix:");
		for(int i=0;i<brr.length;i++)
		{
			for(int j=0;j<brr[i].length;j++)
			{
				System.out.print(brr[i][j]+" ");
			}
			System.out.println();
		}
	}
}

class Demo
{
	public static void main(String args[])
	{
		//Accept number of rows and columns from user
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter number of rows: ");
		int iRow = sobj.nextInt();
		System.out.println("Enter number of columns: ");
		int iCol = sobj.nextInt();
		
		if(iRow%2 == 0){
		
		//allocate memory for the array
		int arr[][] = new int[iRow][iCol];
		
		//Accept array elements
		System.out.println("Enter elements:");
		for(int i=0;i<iRow;i++)
		{
			for(int j=0;j<iCol;j++)
			{
				arr[i][j] = sobj.nextInt();
			}
		}
		
		//Display matrix
		System.out.println("Entered matrix:");
		for(int i=0;i<arr.length;i++)
		{
			for(int j=0;j<arr[i].length;j++)
			{
				System.out.print(arr[i][j]+" ");
			}
			System.out.println();
		}
		
		//create class object
		Matrix mobj = new Matrix();
		//call to function
		mobj.swapRows(arr);
		}
		else
		{
			System.out.println("Enter even value for row");
		}
	}
}