/*
Write a java program which accept number of rows and number of
columns from user and display below pattern.
Input : iRow = 4 iCol = 4
Output :
 * * * #
 * * # *
 * # * *
 # * * *
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
		
		for(int i=iRow;i>=1;i--)
		{
			for(int j=1;j<=iCol;j++)
			{
				if(j==i)
				{
					System.out.print("# ");
				}	
				else
				{
					System.out.print("* ");
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