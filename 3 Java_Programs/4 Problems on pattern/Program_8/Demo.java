/*
Write Java program which accept number of rows and number of columns from user and display below pattern.
Input : iRow = 3 iCol = 5
Output :
 5 4 3 2 1
 5 4 3 2 1
 5 4 3 2 1 
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
			for(int j=iCol;j>=1;j--)
			{
				System.out.print(j+" ");
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