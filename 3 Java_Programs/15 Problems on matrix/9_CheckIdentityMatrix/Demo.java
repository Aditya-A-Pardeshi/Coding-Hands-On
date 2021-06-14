/*
Write a program which accept matrix and check whether the matrix is
identity matrix or not.
Identity matrix is a square matrix with 1’s along the diagonal from upper left to
lower right and 0’s in all other positions.
If it satisfies the structure as explained before then the matrix is called as
identity matrix
1 0 0 0
0 1 0 0 
0 0 1 0
0 0 0 1
*/

import java.lang.*;
import java.util.*;

class Matrix
{
	boolean checkIdentity(int arr[][])
	{
		boolean bRet = true;
		//iterate the matrix and check its values
		for(int i=0;i<arr.length;i++)
		{
			for(int j=0;j<arr[i].length;j++)
			{
				if(i==j)
				{
					if(arr[i][j] != 1)
					{
						bRet = false;
					}
				}
				else
				{
					if(arr[i][j] != 0)
					{
						bRet = false;
					}
				}
			}
		}
		return bRet;
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
		boolean bAns = mobj.checkIdentity(arr);
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