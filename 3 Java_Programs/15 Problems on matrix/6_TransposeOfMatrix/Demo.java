/*
Write a program which accept matrix from user and display transpose of the matrix.
The transpose of a given matrix is formed by interchanging the rows and columns of a matrix.
Input :
3 2 5 9
4 3 2 2
8 4 1 5
3 9 7 5
Output :
3 4 8 3
2 3 4 9
5 2 1 7
9 2 5 5
*/

import java.lang.*;
import java.util.*;

class Matrix
{
	void transposeMatrix(int brr[][])
	{
		int r1 = brr.length;
		int c1 = brr[0].length;
		
		int r2 = c1;
		int c2 = r1;
		
		//Allocate memory for transposed matrix
		int crr[][] = new int[r2][c2];
		
		//iterate the original matrix and create transposed matrix
		for(int i=0;i<r1;i++)
		{
			for(int j=0;j<c1;j++)
			{
				crr[j][i] = brr[i][j];
			}
		}
		//display transposed matrix
		System.out.println("Transposed matrix:");
		for(int i=0;i<r2;i++)
		{
			for(int j=0;j<c2;j++)
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
		mobj.transposeMatrix(arr);
	}
}