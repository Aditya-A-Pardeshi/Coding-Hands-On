/*
Write a java program which accept matrix from user and return its transpose matrix.The transpose of a given matrix is formed by
interchanging the rows and columns of a matrix
*/

import java.lang.*;
import java.util.*;

class Matrix
{
	void transposeMatrix(int brr[][])
	{
		//find row and column values
		int row = brr.length;
		int col = brr[0].length;
		//allocate memory for transpose matrix
		int crr[][] = new int[col][row];
		
		//fill data in transpose matrix
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<col;j++)
			{
				crr[j][i] = brr[i][j];
			}
		}
		System.out.println("Transposed matrix:");
		for(int i=0;i<crr.length;i++)
		{
			for(int j=0;j<crr[i].length;j++)
			{
				System.out.print(crr[i][j]+" ");
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
		mobj.transposeMatrix(arr);
	}
}