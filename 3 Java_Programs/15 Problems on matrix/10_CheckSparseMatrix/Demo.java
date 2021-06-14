/*
Write a program which accept matrix and check whether the matrix is Sparse matrix or not.
Sparse matrix is a matrix with the majority of its elements equal to zero
Input:
1 0 3 0
0 6 0 0
0 0 1 0
9 0 0 9
Output: TRUE
*/

import java.lang.*;
import java.util.*;

class Matrix
{
	boolean checkSparseMatrix(int arr[][])
	{
		int iRow = arr.length;
		int iCol = arr[0].length;
		int iCntZero = 0;
		
		//iterate the matrix and check its values
		for(int i=0;i<iRow;i++)
		{
			for(int j=0;j<iCol;j++)
			{
				if(arr[i][j] == 0)
				{
					iCntZero++;
				}
			}
		}
		if(iCntZero > ((iRow*iCol)/2))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}

class Demo
{
	public static void main(String args[])
	{
		//Accept rows and columns from user
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter number of rows:");
		int iRow = sobj.nextInt();
		System.out.println("Enter number of columns:");
		int iCol = sobj.nextInt();
		
		//allocate memory for matrix
		int arr[][] = new int[iRow][iCol];
		
		//Accept elements
		System.out.println("Enter the elements: ");
		for(int i=0;i<iRow;i++)
		{
			for(int j=0;j<iCol;j++)
			{
				System.out.println("Element"+(i+1)+(j+1)+": ");
				arr[i][j] = sobj.nextInt();
			}
		}
		
		//Displayed the entered matrix
		for(int i=0;i<arr.length;i++)
		{
			for(int j=0;j<arr[i].length;j++)
			{
				System.out.print(arr[i][j]+" ");
			}
			System.out.println();
		}
		
		//object of class
		Matrix mobj = new Matrix();
		
		//call to function
		boolean bAns = mobj.checkSparseMatrix(arr);
		//check returned vaue
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