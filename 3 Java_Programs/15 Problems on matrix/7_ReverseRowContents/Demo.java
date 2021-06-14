/*
Write a program which accept matrix and reverse the contents of each row
Input :
3 2 5 9
4 3 2 2
8 4 1 5
3 9 7 5
Output :
9 5 2 3 
2 2 3 4 
5 1 4 8
5 7 9 3
*/

import java.lang.*;
import java.util.*;

class Matrix
{
	void reverseRow(int brr[][])
	{
		int temp = 0;
		int iStart = 0;
		int iEnd = 0;
		//iterate the original matrix and reverse row contents
		for(int i=0;i<brr.length;i++)
		{
			for(iStart=0,iEnd=brr[i].length-1;iStart<iEnd;iStart++,iEnd--)
			{
				temp = brr[i][iStart];
				brr[i][iStart] = brr[i][iEnd];
				brr[i][iEnd] = temp;
			}
		}
		//display reversed matrix
		System.out.println("Matrix with reversed rows:");
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
		mobj.reverseRow(arr);
	}
}