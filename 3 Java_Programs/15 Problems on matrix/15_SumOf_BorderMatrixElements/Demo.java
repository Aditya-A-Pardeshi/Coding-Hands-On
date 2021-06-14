/*
Write a java program which accept matrix from user and trace and normal of given matrix.Here trace of the matrix is the sum of the 
elements of the main diagonal i.e the diagonal from the upper left to the lower right of a matrix. Normal of the matrix is the square root of
the sum of all the elements
*/

import java.lang.*;
import java.util.*;

class Matrix
{
	int addBorderElements(int brr[][])
	{
		int row = brr.length;
		int col = brr[0].length;
		int iSum = 0;
		
		for(int i=0;i<row;i++)
		{
			for(int j=0;j<col;j++)
			{
				if((i==0) || (i==row-1) || (j==0) || (j==col-1))
				{
					iSum = iSum + brr[i][j];
				}
			}
		}
		return iSum;
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
		int iSum = mobj.addBorderElements(arr);
		System.out.println("Sum of border elemnts: "+iSum);
	}
}