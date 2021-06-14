/*
Write Java program which accept number of rows and number of columns from user and display below pattern.
Input : iRow = 3 iCol = 4
Output :
 1 2 3 4
 5 6 7 8
 9 10 11 12 
*/

import java.lang.*;
import java.util.*;

class Pattern
{
	void DisplayPattern(int iRow, int iCol)
	{	
		int iNo = 1;
		//Updater for negative row or column value
		if(iRow<0)
		{
			iRow = -iRow;
		}
		if(iCol<0)
		{
			iCol = -iCol;
		}
		
		for(int i=1;i<=iRow;i++)
		{
			for(int j=1;j<=iCol;j++)
			{
				System.out.print(iNo+" ");
				iNo++;
			}
			System.out.println();
		}
	}
}

class Demo
{
	public static void main(String args[])
	{
		int iRow = 0;
		int iCol = 0;
		
		//Accept row and column values from user
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter row value:");
		iRow = sobj.nextInt();
		System.out.println("Enter column value:");
		iCol = sobj.nextInt();
		
		//create object of class
		Pattern pobj = new Pattern();
		
		//call the function
		pobj.DisplayPattern(iRow,iCol);
	}
}