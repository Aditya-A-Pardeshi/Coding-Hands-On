/*
Write Java program which accept number of rows and number of columns from user and display below pattern.
Input : iRow = 4 iCol = 3
Output :
 * * *
 * * *
 * * *
 * * *
*/

import java.lang.*;
import java.util.*;

class PatternPrinting
{
	void DisplayPattern(int iRow,int iCol)
	{
		//Updater for negative value for row and column
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
				System.out.print("* ");
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
		
		//Create object of class
		PatternPrinting pobj = new PatternPrinting();
		
		//call the function
		pobj.DisplayPattern(iRow,iCol);
	}
}