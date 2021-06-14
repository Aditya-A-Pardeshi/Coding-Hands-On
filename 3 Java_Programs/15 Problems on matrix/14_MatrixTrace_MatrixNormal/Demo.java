/*
Write a java program which accept matrix from user and trace and normal of given matrix.Here trace of the matrix is the sum of the 
elements of the main diagonal i.e the diagonal from the upper left to the lower right of a matrix. Normal of the matrix is the square root of
the sum of all the elements
*/

import java.lang.*;
import java.util.*;

class Matrix
{
	void findMatrixTraceAndNormal(int brr[][])
	{
		int iTrace = 0;
		int iNormal = 0;
		
		for(int i=0;i<brr.length;i++)
		{
			for(int j=0;j<brr[i].length;j++)
			{
				iNormal = iNormal+brr[i][j];
				if(i == j)
				{
					iTrace = iTrace + brr[i][j];
				}
			}
		}
		System.out.println("Normal: "+Math.sqrt(iNormal));
		System.out.println("Trace: "+iTrace);
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
		mobj.findMatrixTraceAndNormal(arr);
	}
}