/*
Write a java program which accept number of rows and number of
columns from user and display below pattern.
Input : iRow = 4 iCol = 4
Output :
 1 2 3 4 5
 1 2     5
 1  3    5
 1     4 5
 1 2 3 4 5 
*/

import java.lang.*;
import java.util.*;

class Pattern
{
	void displayPattern(int iRow,int iCol)
	{
		//check for unequal number of rows and columns
		if(iRow != iCol)
		{
			return;
		}
		
		for(int i=1;i<=iRow;i++)
		{
			for(int j=1;j<=iCol;j++)
			{
				if((j==i) || (j==1) || (j==iCol) || (i==1) || (i==iRow))
				{
					System.out.print(j+" ");
				}	
				else
				{
					System.out.print("  ");
				}
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
		
		//create object of class
		Pattern pobj = new Pattern();
		//call to function
		pobj.displayPattern(iRow,iCol);
	}
}